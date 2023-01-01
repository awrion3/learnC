# define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>

int main(void)
{
	int sum = 0, num = 0, i = 0;

	while (i<5)
	{
		while (num <= 0)
		{
			printf("number > 0: ");
			scanf("%d", &num);
		}
		sum += num;
		num = 0;
		i++;
	}
	printf("sum: %d \n", sum);
	return 0;
}