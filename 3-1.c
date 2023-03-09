#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int num;

	scanf("%x", &num);

	printf("decimal number = %d\n", num);
	printf("octal number = %o\n", num);

	return 0;
}