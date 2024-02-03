#!/bin/bash

# Error Handling Example

# Function to handle errors gracefully
handle_error() {
    local error_message="$1"
    echo "Error: $error_message" >&2  # Print error message to stderr
    exit 1  # Exit the script with a non-zero status code indicating failure
}

# Example command that may fail
command_that_may_fail() {
    local arg="$1"
    if [ "$arg" != "expected_value" ]; then
        handle_error "Invalid argument: $arg"
    fi
    echo "Command successful with argument: $arg"
}

# Main script logic
main() {
    # Check if the correct number of arguments is provided
    if [ "$#" -ne 1 ]; then
        handle_error "Usage: $0 <argument>"
    fi

    # Call the command that may fail with the provided argument
    command_that_may_fail "$1"

    echo "Script execution completed successfully"
}

# Call the main function with command line arguments
main "$@"
