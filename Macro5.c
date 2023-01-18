#include <stdio.h>

#define STNUM(Y,S,P) Y ## S ## P

int main(void)
{
	printf("%d \n", STNUM(10, 65, 075));
	return 0;
}