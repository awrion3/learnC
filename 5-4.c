#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	char a;

	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z')
		printf("%c", a + ('a' - 'A'));
	else if (a >= 'a' && a <= 'z')
		printf("%c", a - ('a' - 'A'));
	else
		printf("none");

	return 0;
}