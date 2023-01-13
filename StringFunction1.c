#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int ConvInt(char c)
{
	static int diff = 1 - '1';
	return c + diff;
}

int main(void)
{
	char str[50];
	int len, i;
	int sum = 0;
	
	printf("input string: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if ('1' <= str[i] && str[i] <= '9')
			sum += ConvInt(str[i]);
	}
	printf("sum of numbers: %d \n", sum);

	return 0;
}