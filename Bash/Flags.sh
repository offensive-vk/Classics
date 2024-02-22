# Integer or Floating 
[[ NUM -eq NUM ]]	Equal
[[ NUM -ne NUM ]]	Not equal
[[ NUM -lt NUM ]]	Less than
[[ NUM -le NUM ]]	Less than or equal
[[ NUM -gt NUM ]]	Greater than
[[ NUM -ge NUM ]]	Greater than or equal
(( NUM < NUM ))	Less than
(( NUM <= NUM ))	Less than or equal
(( NUM > NUM ))	Greater than
(( NUM >= NUM ))	Greater than or equal

# String Comparisons
[[ -z STR ]]	Empty string
[[ -n STR ]]	Not empty string
[[ STR == STR ]]	Equal
[[ STR = STR ]]	Equal (Same above)
[[ STR < STR ]]	Less than (ASCII)
[[ STR > STR ]]	Greater than (ASCII)
[[ STR != STR ]]	Not Equal
[[ STR =~ STR ]]	Regexp

# File Operations

[[ -e FILE ]]	Exists
[[ -d FILE ]]	Directory
[[ -f FILE ]]	File
[[ -h FILE ]]	Symlink
[[ -s FILE ]]	Size is > 0 bytes
[[ -r FILE ]]	Readable
[[ -w FILE ]]	Writable
[[ -x FILE ]]	Executable
[[ f1 -nt f2 ]]	f1 newer than f2
[[ f1 -ot f2 ]]	f2 older than f1
[[ f1 -ef f2 ]]	Same files