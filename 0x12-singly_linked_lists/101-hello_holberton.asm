section .text
	extern printf
	global main

main:
	mov rdi, msg
	mov al, 0

	call printf

	mov rax, 0
	ret

section .data
	msg db `Hello, Holberton\n`,0