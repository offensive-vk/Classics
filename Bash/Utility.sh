#!/bin/bash

# Text Processing with grep, sed, and awk

# Sample text file
cat <<EOF > sample.txt
Alice 25
Bob 30
Charlie 28
David 35
EOF

echo "Sample text file content:"
cat sample.txt

echo "-------------------------------------"

# Using grep to search for lines containing a specific pattern
echo "Using grep to search for lines containing 'Alice' (case-insensitive) and display line numbers:"
grep -i -n "Alice" sample.txt

echo "-------------------------------------"

# Using sed to replace text in a file
echo "Using sed to replace 'Alice' with 'Eve' and 'Bob' with 'Mallory':"
sed -i -e 's/Alice/Eve/g' -e 's/Bob/Mallory/g' sample.txt
cat sample.txt

echo "-------------------------------------"

# Using awk to print specific columns from a file
echo "Using awk to print the first column:"
awk '{print $1}' sample.txt

echo "-------------------------------------"

# Using awk to calculate the average of numbers in the second column
echo "Using awk to calculate the average age:"
awk '{sum+=$2} END {print "Average Age:", sum/NR}' sample.txt
