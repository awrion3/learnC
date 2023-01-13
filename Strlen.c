#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}

int main(void)
{
	char str[100];
	printf("input string: ");
	fgets(str, sizeof(str), stdin);
	printf("length: %d, content: %s \n", strlen(str), str);

	RemoveBSN(str);
	printf("length: %d, content: %s \n", strlen(str), str);

	return 0;
}