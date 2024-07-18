
global strstr
	section .text
strstr:
	xor rax, rax
	xor rcx, rcx
	jmp loop
start:
	cmp al, 0
	je failed
	inc rdi
loop:
	mov al, [rdi + rcx]
	mov r10b, [rsi + rcx]
	cmp r10b, 0
	je success
	cmp al, r10b
	jne start
	inc rcx
	jmp loop
success:
	mov rax, rdi
	jmp end
failed:
	xor rax, rax
end:
	ret
