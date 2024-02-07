#!/bin/bash

# Environment Variables Example

# Display the value of the PATH environment variable
echo "PATH environment variable:"
echo "$PATH"

# Display the value of the HOME environment variable
echo "HOME environment variable:"
echo "$HOME"

# Set a custom environment variable
CUSTOM_VAR="Hello, World!"
export CUSTOM_VAR

# Display the value of the custom environment variable
echo "Custom environment variable:"
echo "$CUSTOM_VAR"

# Access environment variables within a script
echo "Accessing environment variables within a script:"
echo "Current working directory: $PWD"
echo "Username: $USER"
echo "Hostname: $HOSTNAME"
