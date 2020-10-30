section .data
	string db	`Hello, Holberton\n`
	string_len equ	$-string

section .text
	global main
main:
	mov edi, string
	mov eax, 0
	call printf

extern	printf
