# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
		if (num % 3 == 0 || num % 4 == 0)
			printf("multiple of 3 or 4: %d \n", num);

	return 0;
}