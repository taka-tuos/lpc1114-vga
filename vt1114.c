#include "vt1114.h"

extern unsigned short vfb[32*24];
extern int vtx,vty;

void vt1114_putchar_hw(int x, int y, unsigned char f, unsigned char b, int c)
{
	vfb[y*MAX_X+x] = c;
}

void vt1114_putchar(struct VT1114 *cons, int chr, char move)
{
	vfb[cons->cur_y*MAX_X+cons->cur_x] &= 0xff;
	if (chr == 0x09) {
		for (;;) {
			vt1114_putchar_hw(cons->cur_x, cons->cur_y, COL8_FFFFFF, COL8_000000, ' ');
			cons->cur_x++;
			if (cons->cur_x == MAX_X) {
				vt1114_newline(cons);
			}
			if (((cons->cur_x - 1) & 3) == 0) {
				break;
			}
		}
	} else if (chr == 0x0a || chr == 0x0d) {
		vt1114_newline(cons);
	} else if (chr == 0x08 || chr == 0x7f) {
		cons->cur_x--;
		vt1114_putchar_hw(cons->cur_x, cons->cur_y, COL8_FFFFFF, COL8_000000, ' ');
		if(cons->cur_x < 0) {
			cons->cur_x = 0;
			if(cons->cur_y > 0) {
				cons->cur_y--;
				cons->cur_x = MAX_X-1;
			}
		}
	} else {
		vt1114_putchar_hw(cons->cur_x, cons->cur_y, COL8_FFFFFF, COL8_000000, chr);
		if (move != 0) {
			cons->cur_x++;
			if (cons->cur_x == MAX_X) {
				vt1114_newline(cons);
			}
		}
	}
	
	vtx=cons->cur_x;
	vty=cons->cur_y;
	
	return;
}

void vt1114_newline(struct VT1114 *cons)
{
	int x, y;
	if (cons->cur_y < MAX_Y - 1) {
		cons->cur_y++;
	} else {
		for (y = 0; y < MAX_Y - 1; y++) {
			for (x = 0; x < MAX_X; x++) {
				((unsigned short *)vfb)[x + y * MAX_X] = ((unsigned short *)vfb)[x + (y + 1) * MAX_X];
			}
		}
	}
	cons->cur_x = 0;
	
	vtx=cons->cur_x;
	vty=cons->cur_y;
	
	return;
}

void vt1114_puts(struct VT1114 *cons, char *s)
{
	for (; *s != 0; s++) {
		vt1114_putchar(cons, *s, 1);
	}
	return;
}
