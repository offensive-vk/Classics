#!/bin/bash
# DO NOT EXECUTE OR RUN THIS FILE.

LOG_FILE="access.log"
REPORT_FILE="report.txt"

# Initialize variables for statistics
total_requests=0
http_status_codes=()
ip_address_count=()
url_hits=()
total_response_time=0
total_responses=0

# Function to parse log file and update statistics
parse_log_file() {
    while read -r line; do
        ((total_requests++))

        # Extract fields from log line (assuming common log format)
        ip_address=$(echo "$line" | awk '{print $1}')
        http_status=$(echo "$line" | awk '{print $9}')
        url=$(echo "$line" | awk '{print $7}')
        response_time=$(echo "$line" | awk '{print $NF}')

        # Update statistics
        ((http_status_codes[$http_status]++))
        ((ip_address_count[$ip_address]++))
        ((url_hits[$url]++))
        ((total_response_time += response_time))
        ((total_responses++))
    done < "$LOG_FILE"
}

# Function to generate report
generate_report() {
    echo "Web Server Log Analysis Report" > "$REPORT_FILE"
    echo "===============================" >> "$REPORT_FILE"
    echo "Total Requests: $total_requests" >> "$REPORT_FILE"
    echo "" >> "$REPORT_FILE"
    echo "HTTP Status Codes:" >> "$REPORT_FILE"
    for code in "${!http_status_codes[@]}"; do
        echo "$code: ${http_status_codes[$code]}" >> "$REPORT_FILE"
    done
    echo "" >> "$REPORT_FILE"
    echo "Top 10 IP Addresses:" >> "$REPORT_FILE"
    printf "%s\n" "${!ip_address_count[@]}" | sort -nrk2 | head -n 10 >> "$REPORT_FILE"
    echo "" >> "$REPORT_FILE"
    echo "Top 10 URLs with Highest Hits:" >> "$REPORT_FILE"
    printf "%s\n" "${!url_hits[@]}" | sort -nrk2 | head -n 10 >> "$REPORT_FILE"
    echo "" >> "$REPORT_FILE"
    average_response_time=$((total_response_time / total_responses))
    echo "Average Response Time: $average_response_time ms" >> "$REPORT_FILE"
}

# Main execution
parse_log_file
generate_report

echo "Report generated: $REPORT_FILE"
