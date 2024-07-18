section .text
	global strcasecmp
strcasecmp:
	xor	rax, rax
	xor	rbx, rbx
loop:
	mov al, [rdi]
	mov bl, [rsi]
	cmp	al, bl
	je check
	cmp al, bl
	jl loop3
	jmp loop2
loop3:
	cmp	al, 65
	jl loop2
	cmp	al, 90
	jle	add_al
	jmp add_al
add_al:
	add al, 64
	jmp loop2
loop2:
	cmp	bl, 65
	jl check
	cmp	bl, 90
	jle	add_bl
add_bl:
	add bl, 32
	jmp check
check:
	cmp	al, bl
	jne	end
	cmp	al, 0
	je	end
	cmp	bl, 0
	je	end
	inc	rdi
	inc rsi
	jmp	loop
end:
	sub	rax, rbx
	ret
