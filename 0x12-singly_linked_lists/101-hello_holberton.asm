global main
extern printf

SECTION .text
main:
mov rdi, msg
call printf
ret

        SECTION .data
msg:    db "Hello, Holberton", 0
fmt:    db "%s", 10, 0
