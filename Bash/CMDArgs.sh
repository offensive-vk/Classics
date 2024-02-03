#!/bin/bash

# Command Line Arguments Example

# Display total number of arguments passed
echo "Total number of arguments: $#"

# Display all the arguments passed
echo "All arguments passed: $@"

# Display first argument
echo "First argument: $1"

# Display second argument
echo "Second argument: $2"

# Display third argument
echo "Third argument: $3"

# Iterate through all arguments using a loop
echo "All arguments using a loop:"
for arg in "$@"
do
    echo "$arg"
done