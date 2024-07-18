section .text
    global strpbrk
strpbrk:
	xor r8, r8
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
    jmp loop
success:
	mov rax, rdi
    add rax, r8
    jmp end
failed:
	xor rax, rax
    jmp end
end:
	ret