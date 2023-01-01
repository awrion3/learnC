# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int num = 0, mult = 1;
	printf("number: ");
	scanf("%d", &num);

	while (mult < 10)
	{
		printf("%d X %d = %d \n", num, mult, num * mult);
		mult++;
	}
	return 0;
}