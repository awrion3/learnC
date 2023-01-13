#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];

	printf("input string 1: ");
	scanf("%s", str1);

	printf("input string 2: ");
	scanf("%s", str2);

	if (!strcmp(str1, str2))
	{
		puts("same");
	}
	else
	{
		puts("not same");

		if (!strncmp(str1, str2, 3))
			puts("but the first three chars are same");
	}
	return 0;
}