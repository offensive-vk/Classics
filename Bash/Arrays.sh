#!/bin/bash

# Indexed Arrays Example

# Declare an indexed array
my_array=("apple" "banana" "orange")

# Access elements of the indexed array
echo "First element: ${my_array[0]}"
echo "Second element: ${my_array[1]}"
echo "Third element: ${my_array[2]}"

# Iterate over the elements of the indexed array
echo "All elements of the array:"
for element in "${my_array[@]}"
do
    echo "$element"
done

# Add elements to the indexed array
my_array+=("grape" "kiwi")

# Print the updated indexed array
echo "Updated elements of the array:"
for element in "${my_array[@]}"
do
    echo "$element"
done

# Length of the array
echo "Length of the array: ${#my_array[@]}"

# Remove an element from the array
unset my_array[2]

# Print the array after removing an element
echo "Array after removing the third element:"
for element in "${my_array[@]}"
do
    echo "$element"
done
