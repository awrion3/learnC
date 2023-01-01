# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int num = 2;
	int mult = 0;

	do
	{
		mult = 1;

		do
		{
			printf("%d X %d = %d \n", num, mult, num * mult);
			mult++;
		} while (mult < 10);

		num++;
		printf("\n");
	} while (num < 10);

	return 0;
}