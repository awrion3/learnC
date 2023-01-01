# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int total = 0, num = 0;

	do
	{
		printf("0 to quit: ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);

	printf("total: %d \n", total);
	return 0;
}

// cf. 1
// int total = 0, num = 1;
// while (num!=0)
// {
//		printf("0 to quit: ");
//		scanf("%d", &num);
//		total += num;
// }
// printf("total: %d \n", total);
// return 0;
// }