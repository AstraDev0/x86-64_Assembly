section .text
    global strcspn
strcspn:
    xor r11, r11
loop:
	mov al, [rdi]
    cmp al, 0
    je failed
	xor rcx, rcx
    jmp loop_2
loop_2:
    mov al, [rdi]
    mov r10b, [rsi + rcx]
    cmp r10b, 0
    je inc
    cmp r10b, al
    je success
    inc rcx
    jmp loop_2
inc:
    inc rdi
    inc r11
    jmp loop
success:
	mov rax, r11
    jmp end
failed:
	xor rax, rax
    jmp end
end:
	ret