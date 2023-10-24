#!/usr/bin/perl

# Prompt the user for input
print "Enter a number: ";
my $number = <STDIN>;

print "Enter a name: ";
my $name = <STDIN>;

# Remove newline characters from the input
chomp($number);
chomp($name);

# Check if the input is a valid number
if ($number =~ /^\d+$/) {
    # Print the name the specified number of times
    for (my $i = 0; $i < $number; $i++) {
        print "$name\n";
    }
} else {
    print "Invalid input. Please enter a valid number.\n";
}
