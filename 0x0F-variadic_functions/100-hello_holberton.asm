section .text
	global main
main:
	mov ebx, 1
	mov ecx, msg
	mov edx, len
	mov eax, 4
	int 0x80

	mov eax, 0
	int 0x80

section .data
	msg db 'Hello, Holberton', 0xa
	len equ $ - msg
