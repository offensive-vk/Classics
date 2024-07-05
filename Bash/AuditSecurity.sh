#!/bin/bash

# Define colors for output
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color

# Function to check if a command exists
command_exists() {
    command -v "$1" >/dev/null 2>&1
}

# Function to print a section header
print_header() {
    echo -e "${GREEN}=== $1 ===${NC}"
}

# Function to print an error message
print_error() {
    echo -e "${RED}Error: $1${NC}"
}

# Check and install required tools
install_tools() {
    print_header "Installing Required Tools"
    tools=(lynis nmap logwatch aide)
    for tool in "${tools[@]}"; do
        if ! command_exists "$tool"; then
            echo "Installing $tool..."
            sudo apt-get install -y "$tool"
        else
            echo "$tool is already installed."
        fi
    done
}

# Run Lynis security audit
run_lynis() {
    print_header "Running Lynis Security Audit"
    sudo lynis audit system
}

# Run AIDE for file integrity check
run_aide() {
    print_header "Running AIDE File Integrity Check"
    sudo aideinit
    sudo cp /var/lib/aide/aide.db.new /var/lib/aide/aide.db
    sudo aide --check
}

# Run Nmap network scan
run_nmap() {
    print_header "Running Nmap Network Scan"
    sudo nmap -sS -O 127.0.0.1
}

# Run Logwatch to analyze logs
run_logwatch() {
    print_header "Running Logwatch Log Analysis"
    sudo logwatch --detail high --range today
}

# Generate summary report
generate_report() {
    print_header "Generating Summary Report"
    echo "Lynis Report:"
    sudo cat /var/log/lynis.log | tail -n 10
    echo "AIDE Report:"
    sudo cat /var/log/aide/aide.log | tail -n 10
    echo "Nmap Report:"
    sudo nmap -sS -O 127.0.0.1
    echo "Logwatch Report:"
    sudo logwatch --detail high --range today | tail -n 20
}

# Main function to run all checks
main() {
    install_tools
    run_lynis
    run_aide
    run_nmap
    run_logwatch
    generate_report
}

# Execute main function
main