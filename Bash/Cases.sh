#!/bin/bash

# Usage of the case statement in shell script

# Prompt the user to enter a choice
echo "Enter a choice (A, B, C, or D):"
read choice

# Case statement to perform different actions based on the choice
case "$choice" in
    A|a)
        echo "You chose Option A"
        ;;
    B|b)
        echo "You chose Option B"
        ;;
    C|c)
        echo "You chose Option C"
        ;;
    D|d)
        echo "You chose Option D"
        ;;
    *)
        echo "Invalid choice. Please enter A, B, C, or D."
        ;;
esac

# Menu options using case statement

echo "Menu Options:"
echo "1. Start"
echo "2. Stop"
echo "3. Restart"
echo "4. Exit"

read option

case "$option" in
    1)
        echo "Starting service..."
        ;;
    2)
        echo "Stopping service..."
        ;;
    3)
        echo "Restarting service..."
        ;;
    4)
        echo "Exiting..."
        exit 0
        ;;
    *)
        echo "Invalid option"
        ;;
esac
