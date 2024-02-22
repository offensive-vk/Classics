#!/bin/bash

# Loops Example

# For Loop: Print numbers from 1 to 5
echo "For Loop:"
for ((i = 1; i <= 5; i++)); do
    echo $i
done

echo

# While Loop: Print numbers from 1 to 5
echo "While Loop:"
counter=1
while [ $counter -le 5 ]; do
    echo $counter
    ((counter++))
done

echo

# Until Loop: Print numbers from 1 to 5
echo "Until Loop:"
counter=1
until [ $counter -gt 5 ]; do
    echo $counter
    ((counter++))
done

echo
