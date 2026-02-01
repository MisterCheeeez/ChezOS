; boot.asm - tiny bootloader
; BIOS loads this at 0x7C00

org 0x7C00           ; code origin

cli                  ; disable interrupts
xor ax, ax
mov ds, ax
mov es, ax
mov ss, ax
mov sp, 0x7C00
sti                  ; enable interrupts

; jump to kernel loaded at 0x1000
jmp 0x1000

; pad bootloader to 510 bytes
times 510-($-$$) db 0

; boot signature
dw 0xAA55
