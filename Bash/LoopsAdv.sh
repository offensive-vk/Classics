for i in /etc/rc.*; do
    echo $i
done

for ((i = 0 ; i < 100 ; i++)); do
    echo $i
done

for i in {1..5}; do
    echo "Welcome $i"
done

i=1
while [[ $i -lt 4 ]]; do
    echo "Number: $i"
    ((i++))
done

i=3
while [[ $i -gt 0 ]]; do
    echo "Number: $i"
    ((i--))
done

for i in {5..50..5}; do
    echo "Welcome $i"
done

# reading lines
cat file.txt | while read line; do
    echo $line
done

# infinite
while true; do
    # here is some code.
done

count=0
until [ $count -gt 10 ]; do
    echo "$count"
    ((count++))
done

for number in $(seq 1 3); do
    if [[ $number == 2 ]]; then
        # Skip entire rest of loop.
        break;
    fi
    # This will only print 1
    echo "$number"
done
