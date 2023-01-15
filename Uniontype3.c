#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct dbshort
{
	unsigned short upper;
	unsigned short lower;
} DBshort;

typedef union rdbuf
{
	int iBuf;
	char bBuf[4];
	DBshort sBuf;
} RDBuf;

int main(void)
{
	RDBuf buf;
	printf("input integer: ");
	scanf("%d", &(buf.iBuf));

	printf("upper 2 bytes: %u \n", buf.sBuf.upper);
	printf("lower 2 bytes: %u \n", buf.sBuf.lower);
	printf("upper 1 byte: %c \n", buf.bBuf[0]);
	printf("upper 1 byte: %c \n", buf.bBuf[3]);

	return 0;
}