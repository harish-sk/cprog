	.file	"volatile.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	movl	sum(%rip), %edx
	movl	$1000, %eax
.L2:
	movl	y(%rip), %ecx
	addl	%ecx, %edx
	subl	$1, %eax
	jne	.L2
	movl	%edx, sum(%rip)
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.comm	sum,4,4
	.globl	y
	.data
	.align 4
	.type	y, @object
	.size	y, 4
y:
	.long	10
	.ident	"GCC: (Ubuntu 5.3.1-14ubuntu2.1) 5.3.1 20160413"
	.section	.note.GNU-stack,"",@progbits
