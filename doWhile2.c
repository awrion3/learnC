# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int total = 0, num = 0;

	do
	{
		total += num;
		num = num + 2;

	} while (num <=100);

	printf("total: %d \n", total);
	return 0;
}
