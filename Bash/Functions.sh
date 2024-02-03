#!/bin/bash

# Functions Example

# Function Definition: Basic function without parameters
greet() {
    echo "Hello, world!"
}

# Function Call
greet

# Function Definition: Function with parameters
say_hello() {
    local name=$1
    echo "Hello, $name!"
}

# Function Call with argument
say_hello "John"

# Function Definition: Function with return value
add_numbers() {
    local num1=$1
    local num2=$2
    local sum=$((num1 + num2))
    echo $sum
}

# Function Call with arguments and capturing return value
result=$(add_numbers 5 3)
echo "Sum is: $result"

# Function Definition: Recursive function
factorial() {
    local num=$1
    if ((num <= 1)); then
        echo 1
    else
        local prev_factorial=$(factorial $((num - 1)))
        echo $((num * prev_factorial))
    fi
}

# Function Call for factorial calculation
factorial_result=$(factorial 5)
echo "Factorial of 5 is: $factorial_result"
