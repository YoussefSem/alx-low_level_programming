;; --------------------------------------------------------------------------------------
	;;
	;;  Real programmers can write assembly code in any language
	;;  You are only allowed to use the printf function.
	;;  nasm -f elf64 101-hello_holberton.asm && gcc 101-hello_holberton.o -o hello
	;;
	;; --------------------------------------------------------------------------------------

	section .data
	format db "%s", 10, 0
	message db "Hello, Holberton", 0

	section .text
	extern printf 		;C function to be called
	global main 		;main function

main:
	push rbp
	mov rdi, format
	mov rsi, message
	mov rax, 0 		;can be xor rax, rax
	call printf 		;call C function.

	pop rbp 		;restor stack

	mov rax, 0 		;normal, no error, return value
	ret 			;return
