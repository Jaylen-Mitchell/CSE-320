

.text
.global dumb_multiply
.global dumb_sqrt
.global efficient_sqrt


@
@ Multiply two numbers together by brute force
@ r0 - First unsigned value
@ r1 - Second unsigned value
@ Returns r0 * r1
@
dumb_multiply:

  @ initialization
 	  movs r0,r0   @ a
		movs r1,r1   @ b
		movs r2, #0  @ i
		movs r3, #0  @ sum

	while:
  subs r0,r0,#1
	bmi  done      @ exit loop when a becomes negative
                 @ indicating we multiplied each a value before a became
                 @negative

	add r3,r3,r1  @ sum += b
	add r2,r2,#1     @ i++
	b while 
	
	done:
	mov r0,r3  @ copy sum to r0 and return
    bx lr


@
@ Dumb, inefficient square root computation
@ r0 - Passed in value: num
@ Returns sqrt(r0)
@
dumb_sqrt:

	 @ initialization2
    movs r1, #1  @ n
    movs r2, #1  @ n_sqr
    movs r3, #0  @ scratch

  forloop:
   mov r3,#0  @ make sure r3 is reset 
   cmp r1,#32768 @ if n -32768 is less then 0 then we need to stop
   beq  done2   @ return result

   cmp r0,r2 @if n_sqr == num we break out of the loop 
   beq done2       @ return result
  
   cmp r2,r0     @ if n_sqr > num
   subgt r1,r1,#1@ n--
   bgt  done2    @ return result

 
   add r3,r1,r1 @ n*2
   add r3,#1 @n*2+1
   add r2, r2,r3 @ n_sqr+= n*2+1


   add r1, r1, #1 @n++
   b forloop
  
   done2:
    mov r0, r1
		bx lr
	
@
@ Efficient integer square root computation
@ r0 - Passed in value: num
@ Returns sqrt(r0)
@
efficient_sqrt:
  mov r1, #0 @ res
  mov r2, #1<< @ bit
	bx lr

