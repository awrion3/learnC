# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int num, mult;

	for (num=2; num<10; num++)
	{
		for (mult = 1; mult < 10; mult++)
			printf("%d X %d = %d \n", num, mult, num * mult);
		printf("\n");
	}
	return 0;
}