section .data
    hello db 'Hello, World', 0xA

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [rel hello]
    xor rax, rax
    call printf

    xor eax, eax

    pop rbp
    ret