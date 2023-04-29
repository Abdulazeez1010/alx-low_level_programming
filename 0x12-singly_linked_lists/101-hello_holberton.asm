section .data
	msg db 'Hello, Holberton', 0xa

section .text
	global main

main:
	; write message to console
	mov rax, 1	; system call for write
	mov rdi, 1	; file descriptor for stdout
	mov rsi, msg	; message to write
	mov rdx, 16	; message length
	syscall		; call kernel to perform system call

	; exit program
	mov rax, 60	; system call for exit
	xor rdi, rdi	; return code 0
	syscall		; call kernel to perform system call
