#!/bin/bash

# Control Statements Example

# Prompt the user to enter their age
echo "Please enter your age:"

# Read user input for age
read age

# Check if the age is greater than or equal to 18
if [ "$age" -ge 18 ]; then
    echo "You are an adult."
else
    echo "You are a minor."
fi

# Check if the age is divisible by 2 (even) or not (odd)
if (( $age % 2 == 0 )); then
    echo "Your age is an even number."
else
    echo "Your age is an odd number."
fi

# Check if the age is in the range of 18 to 30
if (( age >= 18 && age <= 30 )); then
    echo "You are between 18 and 30 years old."
else
    echo "You are not between 18 and 30 years old."
fi

# Check if the age is between 0 and 17, or 31 and above
if [[ "$age" -lt 18 || "$age" -gt 30 ]]; then
    echo "You are either a child (0-17 years) or a senior (31+ years)."
fi
