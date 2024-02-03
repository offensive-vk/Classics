#!/bin/bash

# Associative Arrays Example

# Declare an associative array
declare -A fruit_prices

# Add elements to the associative array
fruit_prices["apple"]=2
fruit_prices["banana"]=1
fruit_prices["orange"]=3

# Access elements of the associative array
echo "Price of an apple: ${fruit_prices["apple"]} dollars"
echo "Price of a banana: ${fruit_prices["banana"]} dollars"
echo "Price of an orange: ${fruit_prices["orange"]} dollars"

# Iterate over the keys of the associative array
echo "All fruits and their prices:"
for fruit in "${!fruit_prices[@]}"
do
    echo "Price of $fruit: ${fruit_prices[$fruit]} dollars"
done

# Update the value of an element in the associative array
fruit_prices["apple"]=2.5

# Print the updated value of the element
echo "Updated price of an apple: ${fruit_prices["apple"]} dollars"
