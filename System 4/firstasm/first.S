@ 
@ My first assembly language program
@ Name: 
@

.text
.global first
.global second

first:
	mov r1, r0
  add r0, r0, r1
  add r0, r0, r1
  bx lr
second:
  add r0, r0, r1
  bx lr
