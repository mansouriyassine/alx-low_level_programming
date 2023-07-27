section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0   ; "%s" is the format specifier for a string, 10 is ASCII for newline, 0 is the null terminator

section .text
    extern printf

global main
main:
    ; Call printf function to print the message
    mov rdi, format   ; Format specifier ("%s\n")
    mov rsi, hello    ; Address of the string to be printed
    xor rax, rax      ; Clear RAX register (required by printf calling convention)
    call printf

    ; Exit the program
    mov rax, 60       ; syscall number for sys_exit
    xor rdi, rdi      ; exit status 0
    syscall
