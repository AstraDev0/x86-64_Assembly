section .text
	global memset

memset:
	xor rcx, rcx
loop:
	cmp rcx, rdx
	je finish
	cmp rdx, 0
	je finish
	jmp add_value
	inc rcx
	jmp loop
add_value:
	mov [rdi + rcx], sil
	inc rcx
	jmp loop
finish:
	mov rax, rdi
	ret