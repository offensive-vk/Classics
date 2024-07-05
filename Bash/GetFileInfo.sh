#!/bin/bash

# Define the output file
OUTPUT_FILE="info.txt"

# Print header to output file
echo "File Information for Directory: $(pwd)" > "$OUTPUT_FILE"
echo "Generated on: $(date)" >> "$OUTPUT_FILE"
echo "==================================================" >> "$OUTPUT_FILE"
echo "" >> "$OUTPUT_FILE"

# Function to get file information
get_file_info() {
    local file="$1"
    echo "File: $file" >> "$OUTPUT_FILE"
    echo "Permissions: $(stat -c '%A' "$file")" >> "$OUTPUT_FILE"
    echo "Owner: $(stat -c '%U' "$file")" >> "$OUTPUT_FILE"
    echo "Group: $(stat -c '%G' "$file")" >> "$OUTPUT_FILE"
    echo "Size: $(stat -c '%s' "$file") bytes" >> "$OUTPUT_FILE"
    echo "Last Access: $(stat -c '%x' "$file")" >> "$OUTPUT_FILE"
    echo "Last Modification: $(stat -c '%y' "$file")" >> "$OUTPUT_FILE"
    echo "Last Change: $(stat -c '%z' "$file")" >> "$OUTPUT_FILE"
    echo "==================================================" >> "$OUTPUT_FILE"
    echo "" >> "$OUTPUT_FILE"
}

# Export the function so it can be used by find
export -f get_file_info
export OUTPUT_FILE

# Find all files and directories and get their info
find . -exec bash -c 'get_file_info "$0"' {} \;

# Notify user of completion
echo "File information has been saved to $OUTPUT_FILE."
