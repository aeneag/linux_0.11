#ifndef _HEAD_H
#define _HEAD_H
/**
 * @author : Nick Xia ;  @blog  :https://aeneag.xyz/
 * @time   : 2023/11/13 19:30:18
 * @desc   : Segment descriptor data structure, 8 bytes, a total of 256
 */
typedef struct desc_struct {
	unsigned long a,b;
} desc_table[256];

extern unsigned long pg_dir[1024];
extern desc_table idt,gdt;

#define GDT_NUL 0
#define GDT_CODE 1
#define GDT_DATA 2
#define GDT_TMP 3

#define LDT_NUL 0
#define LDT_CODE 1
#define LDT_DATA 2

#endif
