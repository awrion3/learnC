#include <stdio.h>

int main(void)
{
	char str[] = { 'G', 'o', 'o', 'd', ' ', 'T', 'i', 'm', 'e' };
	int arLen = sizeof(str) / sizeof(char);
	int i;

	for (i = 0; i < arLen; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");
	
	return 0;
}