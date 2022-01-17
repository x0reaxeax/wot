# u w0t m8?
obfuscated stuff

## Compiling
`gcc wot.c`

## `main[]`:
```assembly
mov     rsi, rax    ; 48 89 c6   }
jmp     0x11        ; eb 0c      }  - 5 bytes
db      55          ; U
db      20          ;
db      57          ; W
db      4f          ; O
db      54          ; T
db      20          ;
db      4d          ; M
db      38          ; 8
db      3f          ; ?
db      21          ; !
db      3f          ; ?
db      0a          ; \n
mov     eax, 0x1    ; sys_write
mov     edi, 0x1    ; stdout
add     rsi, 0x5    ; 5 bytes offset
mov     edx, 0xc    ; 12 chars
syscall
xor     edi, edi
mov     eax, 0x3c   ; sys_exit
syscall
```

## `x()`:
```assembly
lea     rax, [rip+main] ; addy of main (&main)
push    rax             ; save it
xor     edx, edx
mov     ebx, 0x1000     ; 4096 (page size)
div     ebx             ; &main / 4096
pop     rdi             ; pop &main
sub     rdi, rdx        ; subtract remainder from &main 
mov     eax, 0xa        ; sys_mprotect
mov     esi, 0x1000     ; 4096 size
mov     edx, 0x7        ; PROT_READ | PROT_WRITE | PROT_EXEC = 0x7
syscall
```
