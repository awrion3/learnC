#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);

	printf("The %dth upper case letter in the English alphabet is %c.\n", a, a+65);

	return 0;
}
