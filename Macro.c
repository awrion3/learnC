#include <stdio.h>

#define NAME "KIM"
#define AGE 24
#define P_ADR puts("Korea, Seoul\n");

int main(void)
{
	printf("name: %s \n", NAME);
	printf("age: %d \n", AGE);
	P_ADR;

	return 0;
}