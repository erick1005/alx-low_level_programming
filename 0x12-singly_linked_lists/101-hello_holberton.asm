global	main
	extern	printf
main:
	mov rax, 1
    mov rdi, 1
    mov rsi, hello
    mov rdx, 16
    syscall

format: db 'Hello, Holberton\n'0
