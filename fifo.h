#ifndef __FIFO_H__
#define __FIFO_H__

typedef struct {
	int *buf;
	int p, q, size, free, flags;
} FIFO32;
void fifo32_init(FIFO32 *fifo, int size, int *buf);
int fifo32_put(FIFO32 *fifo, int data);
int fifo32_get(FIFO32 *fifo);
int fifo32_status(FIFO32 *fifo);

#endif
