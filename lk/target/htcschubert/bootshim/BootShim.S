#define DSB .byte 0x4f, 0xf0, 0x7f, 0xf5
#define ISB .byte 0x6f, 0xf0, 0x7f, 0xf5
#define WSPL_VADDR 0x80000000

.text
.globl _start
_start:
	b   ReadFb

//if EDK2 is loaded by wince spl add romhdr
.org 0x40
	.word 0x43454345
	.word (romhdr-_start)+WSPL_VADDR  // virtual address of romhdr
	.word romhdr-_start               // file address of romhdr

.org 0x00000900
romhdr:
	.word 0x2000000             // dllfirst
	.word 0x2000000             // dlllast
	.word WSPL_VADDR            // physfirst
	.word WSPL_VADDR+0x000F0000 // physlast (using hardoded FV size, fix later?)
	.word 0                     // nummods (no TOCentry after ROMHDR)
	.word WSPL_VADDR+0x000F0000 // ulRAMStart
	.word WSPL_VADDR+0x000F0000 // ulRAMFree
	.word WSPL_VADDR+0x001F0000 // ulRAMEnd
	.word 0                     // ulCopyEntries
	.word 0                     // ulCopyOffset
	.word 0                     // ulProfileLen
	.word 0                     // ulProfileOffset
	.word 0                     // numfiles
	.word 0                     // ulKernelFlags
	.word 0x80808080            // ulFSRamPercent
	.word 0                     // ulDrivglobStart
	.word 0                     // ulDrivglobLen
	.hword 0x1C2                // usCPUType
	.hword 0x2                  // usMiscFlags
	.word 0                     // pExtensions
	.word 0                     // ulTrackingStart
	.word 0                     // ulTrackingLen
.org 0x00001000

ReadFb:
    MOV R0, #0x02A00000     @ Load the value 0x02A00000 into R0
    LDR R1, =0xAA290008     @ Load the memory address to write into R1
    STR R0, [R1]            @ Store the value in R0 to the memory address in R1

    MOV R1, R0              @ Set R1 as the base address

    MOV R2, #0x07E0         @ Load the fill value into R2
    MOV R3, #0x00C00000     @ Load the fill length into R3

fill_loop:
    STR R2, [R1], #4        @ Store the fill value to memory address pointed by R1, and increment R1 by 4 (assuming each memory location is 4 bytes)
    SUBS R3, R3, #4         @ Subtract 4 from R3 to track the remaining fill length
    BNE fill_loop           @ Branch back to fill_loop if R3 is not zero

end:
    B end                   @ Endless loop (program does nothing after filling memory)
.ltorg

