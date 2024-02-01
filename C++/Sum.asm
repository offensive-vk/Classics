section .data
    msg1 db 'Enter first number: ', 0
    len1 equ $ - msg1
    msg2 db 'Enter second number: ', 0
    len2 equ $ - msg2
    sum_msg db 'The sum is: ', 0
    len_sum equ $ - sum_msg

section .bss
    num1 resb 10 ; reserve space for first number
    num2 resb 10 ; reserve space for second number

section .text
    global _start

_start:
    ; Print message for first number
    mov eax, 4
    mov ebx, 1
    mov ecx, msg1
    mov edx, len1
    int 80h

    ; Read first number
    mov eax, 3
    mov ebx, 0
    mov ecx, num1
    mov edx, 10
    int 80h

    ; Print message for second number
    mov eax, 4
    mov ebx, 1
    mov ecx, msg2
    mov edx, len2
    int 80h

    ; Read second number
    mov eax, 3
    mov ebx, 0
    mov ecx, num2
    mov edx, 10
    int 80h

    ; Convert ASCII to integer for first number
    mov ebx, num1
    call ascii_to_int
    mov esi, eax ; store first number in esi

    ; Convert ASCII to integer for second number
    mov ebx, num2
    call ascii_to_int
    add esi, eax ; add second number to first number

    ; Print sum
    mov eax, 4
    mov ebx, 1
    mov ecx, sum_msg
    mov edx, len_sum
    int 80h

    ; Convert sum to ASCII and print
    mov eax, esi
    call int_to_ascii
    mov edx, 10 ; newline character
    mov [esp], eax ; store sum (in ASCII) to print
    add dword [esp], '0' ; convert sum to ASCII
    mov eax, 4
    mov ebx, 1
    mov ecx, esp
    add edx, 1 ; increase length to print newline
    int 80h

    ; Exit
    mov eax, 1
    xor ebx, ebx
    int 80h

ascii_to_int:
    xor eax, eax ; clear eax
    xor edx, edx ; clear edx
    .ascii_to_int_loop:
        movzx ecx, byte [ebx] ; load next character
        cmp ecx, 0 ; check for null terminator
        je .ascii_to_int_done
        sub ecx, '0' ; convert ASCII to integer
        imul eax, 10 ; multiply current number by 10
        add eax, ecx ; add current digit to number
        inc ebx ; move to next character
        jmp .ascii_to_int_loop
    .ascii_to_int_done:
    ret

int_to_ascii:
    xor edx, edx ; clear edx
    mov ecx, 10 ; divisor
    xor ebx, ebx ; clear ebx
    div_loop:
        xor edx, edx ; clear edx
        div ecx ; divide eax by 10, result in eax, remainder in edx
        add dl, '0' ; convert remainder to ASCII
        dec esp ; move to next position in stack
        mov [esp], dl ; store ASCII digit in stack
        test eax, eax ; check if quotient is zero
        jnz div_loop ; if not zero, continue loop
    ret
