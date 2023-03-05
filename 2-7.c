#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	char a;

	scanf("%c", &a);

	printf("%c is the %dth lower case letter in the English alphabet.\n", a, a-'a');

	return 0;
}
