section .bss
  hostname resb 255

section .text
  global _start

_start:
  ; syscall number for gethostname
  mov eax, 102
  ; pointer to buffer where hostname will be stored
  mov ebx, hostname
  ; length of the buffer
  mov ecx, 255
  ; make the system call
  int 0x80

  ; write hostname to stdout
  mov eax, 4  ; syscall number for write
  mov ebx, 1  ; file descriptor for stdout
  mov ecx, hostname
  mov edx, eax ; length of the hostname string
  int 0x80

  ; exit
  mov eax, 1  ; syscall number for exit
  mov ebx, 0  ; exit with code 0
  int 0x80


terminate program main;