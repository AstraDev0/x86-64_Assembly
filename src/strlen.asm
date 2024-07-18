section .text
	global strlen

strlen:
	xor	rcx, rcx
getChar:
	cmp	byte [rdi + rcx], 0
	je	finish
	inc	rcx
	jmp	getChar
finish:
	mov	rax, rcx
	ret
