section .text
	global strncmp
strncmp:
	xor	rcx, rcx
	xor	rax, rax
	xor	rbx, rbx

loop:
	cmp	rdx, rcx
	je end
	mov al, [rdi + rcx]
	mov bl, [rsi + rcx]
	cmp	al, 0
	je	end
	cmp	bl, 0
	je	end
	cmp	al, bl
	jne	end
	inc rcx
	jmp	loop
end:
	sub	rax, rbx
	ret
