section .text
	global memcpy
memcpy:
    xor r8, r8
    cmp rdi, rsi
    je end
loop:
    cmp rdx, 0
    je end
    cmp rdx, 0
	je end
    mov r11b, [rsi]
    cmp r11b, 0
    je end
    mov [rdi + r8], r11b
	inc	r8
	dec	rdx
    jmp loop
end:
    mov rax, rdi
	ret
