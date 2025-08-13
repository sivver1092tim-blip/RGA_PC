

.data
.code

	SkipSkillProc PROC
		
		push	rbp
		push	rsi
		push	rdi
		push	r15
		lea		rbp, [rsp-3Fh]
		sub     rsp, 98h
		jmp		r8
	SkipSkillProc ENDP

END	