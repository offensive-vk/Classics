#!/bin/bash

# Pattern Matching and Basic Regex Example

# Sample text
text="The quick brown fox jumps over the lazy dog"

# Pattern matching using grep
echo "Sample text: $text"
echo "-------------------------------------"

# Match words starting with 'The'
echo "Words starting with 'The':"
echo "$text" | grep -o '\<The\w*'

# Match words ending with 'dog'
echo "Words ending with 'dog':"
echo "$text" | grep -o '\w*dog\>'

# Match words containing 'o'
echo "Words containing 'o':"
echo "$text" | grep -o '\<\w*o\w*\>'

# Match words starting with 'q', 'r', or 's'
echo "Words starting with 'q', 'r', or 's':"
echo "$text" | grep -o '\<[qrs]\w*'

# Match words starting with 'q', 'r', or 's' followed by 'o'
echo "Words starting with 'q', 'r', or 's' followed by 'o':"
echo "$text" | grep -o '\<[qrs]o\w*'

# Match numbers
echo "Numbers in the text:"
echo "$text" | grep -o '[0-9]*'

# Match email addresses
emails="user@example.com, admin@test.com, support@domain.com"
echo "Email addresses:"
echo "$emails" | grep -o '\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}\b'
