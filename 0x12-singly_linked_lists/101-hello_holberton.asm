section .text
	global main

main:
	mov rdi,formatStr ;1st arg
	mov rsi,5 				;2nd arg
	;mov al,0 					;magic for varargs (0==no magic)
	mov rax, 0

	extern printf
	call printf

	ret

section .data
	formatStr db `Hello, %d Holberton\n`,0