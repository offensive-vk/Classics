#!/bin/bash

# Usage of all format specifiers and flags in echo

# Format specifiers:
echo "Format specifiers:"

# %b - Backslash escape sequences are interpreted
echo "Backslash escape sequences: hello\nworld ->" 
echo -e "hello\nworld\n"

# %s - String
echo "String: %s" "Hello, World!"

# %d - Decimal (integer)
echo "Decimal: %d" 42

# %f - Floating point
echo "Floating point: %f" 3.14159

# Flags:
echo -e "\nFlags:"

# -n - Do not output the trailing newline
echo -n "No newline at the end"

# -e - Enable interpretation of backslash escapes
echo -e "\nBackslash escape sequences: hello\nworld ->" 