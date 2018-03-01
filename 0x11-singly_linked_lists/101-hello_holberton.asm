;; declare required c functions
	extern printf		; the c function to be called
	section .data		; data section initializing variables
msg:	db 'Hello, Holberton', 0 ; string 0
fmt:	db "%s", 10, 0		 ; printf format for new line and 0

	section .text		; code
	global main		; gcc entry point
main:				; program entry point
	push rbp		;creating stack frame
	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call printf		; calling required function
	pop rbp			; clean stack
	mov rax,0		; error value
	ret			; return
