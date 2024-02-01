.section .data
msg: db "Hello, World!\n", 0

.section .text
_start:
    mov rax, 1     ; system call number for write
    mov rdi, 1     ; file descriptor for stdout
    mov rsi, msg    ; address of the message to print
    mov rdx, 14    ; length of the message
    syscall

    mov rax, 60    ; system call number for exit
    mov rdi, 0     ; exit status
    syscall

end:
