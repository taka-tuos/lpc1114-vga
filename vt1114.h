#ifndef __VT1114__
#define __VT1114__

#define	MAX_Y				24
#define	MAX_X				32
#define	MAX_XY				(32*24)

struct VT1114 {
	int cur_x, cur_y;
};

void vt1114_putchar(struct VT1114 *cons, int chr, char move);
void vt1114_newline(struct VT1114 *cons);
void vt1114_puts(struct VT1114 *cons, char *s);

#define COL8_000000		0
#define COL8_FFFFFF		7

#endif
