<<<<<<< HEAD
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
=======
  SECTION .text
  extern printf
  global main
  
  main:
  push rbp
  mov rdi, fmt
  mov rsi, msg
  mov rax, 0
  call printf
  
pop rbp

mov rax, 0
ret

  SECTION .data
msg:    db "Hello, Holberton", 0
fmt:    db "%s", 10, 0













>>>>>>> 16039185327879a3de27cce4e00bc582b4f40e85
