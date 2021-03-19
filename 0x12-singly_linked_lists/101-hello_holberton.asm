section .text
	global main

main:
	mov rdi,formatStr ;1st arg
	;mov rsi,5 				;2nd arg
	mov al,0 					;magic for varargs (0==no magic)

	extern printf
	call printf

	ret

formatStr:
	db `Hello, Holberton\n`,0
