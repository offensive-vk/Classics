#!/bin/bash

# Variables and Data Types in Shell Scripting

# Integer Variable
number=42

# String Variable
name="John Doe"

# Floating Point Variable (not native, but can be achieved with external tools like bc)
float_number=$(echo "scale=2; 3.14" | bc)

# Array Variable
fruits=("Apple" "Banana" "Orange")

# Print variables and their data types
echo "Integer Variable: $number"
echo "String Variable: $name"
echo "Floating Point Variable: $float_number"
echo "Array Variable (Fruits): ${fruits[@]}"

# Print data types
echo "Data Type of Integer Variable: $(declare -p number | cut -d' ' -f2)"
echo "Data Type of String Variable: $(declare -p name | cut -d' ' -f2)"
echo "Data Type of Floating Point Variable: $(declare -p float_number | cut -d' ' -f2)"
echo "Data Type of Array Variable: $(declare -p fruits | cut -d' ' -f2)"
