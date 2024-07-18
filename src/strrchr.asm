section .text
	global strrchr

strrchr:
    xor rax, rax
	xor	rcx, rcx
	xor r9, r9
CountChar:
    cmp sil, 0
	je finishNull
	mov r10b, [rdi + r9]
    cmp r10b, 0
    je checkend
    cmp r10b, sil
    jne next_char
    mov rax, r9
next_char:
    inc r9
    jmp CountChar
checkend:
    cmp rax, 0
    je finishNull
    jmp getChar
getChar:
    mov r10b, [rdi + rcx]
	cmp	rcx, rax
	je loopFinish
	inc	rcx
	jmp	getChar
loopFinish:
    cmp rcx, 0
    je finish
    inc rdi
    dec rcx
    jmp loopFinish
finish:
	xor rax, rax
	mov rax, rdi
	ret
finishNull:
    ret
