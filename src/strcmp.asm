section .text
    global strcmp
strcmp:
	xor	rax, rax
	xor	rbx, rbx

loop:
	mov	al, [rdi]
	mov	bl, [rsi]
	cmp	al, 0
	je	end
	cmp	bl, 0
	je	end
	cmp	al, bl
	jne	end
	inc	rdi
	inc rsi
	jmp	loop

end:
	sub	rax, rbx
	ret
