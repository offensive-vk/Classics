#!/bin/bash

# File and Text Processing Example

# Check if a file exists
file_path="example.txt"
if [ -f "$file_path" ]; then
    echo "File '$file_path' exists."
else
    echo "File '$file_path' does not exist."
fi

# Create a new file and write text to it
echo "This is line 1." > "$file_path"
echo "This is line 2." >> "$file_path"

# Append more text to the file
echo "Appending more text." >> "$file_path"

# Read and display the contents of the file
echo "Contents of '$file_path':"
cat "$file_path"

# Count the number of lines in the file
line_count=$(wc -l < "$file_path")
echo "Number of lines in '$file_path': $line_count"

# Search for a specific string in the file
search_string="line 2"
if grep -q "$search_string" "$file_path"; then
    echo "Found '$search_string' in '$file_path'."
else
    echo "String '$search_string' not found in '$file_path'."
fi

# Replace a string in the file
old_string="line 2"
new_string="changed line"
sed -i "s/$old_string/$new_string/g" "$file_path"

# Read and display the modified contents of the file
echo "Modified contents of '$file_path':"
cat "$file_path"