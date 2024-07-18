section .text
	global strchr

strchr:
    xor rax, rax
	xor	rcx, rcx
getChar:
	mov r10b, [rdi + rcx]
	cmp	sil, r10b
	je finish
	cmp r10b, 0
	je finishNull
	inc	rcx
	jmp	getChar
finish:
	mov rax, rdi
	add rax, rcx
	ret
finishNull:
	ret

