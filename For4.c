# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int num, i;
	int result = 1;

	printf("number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		result = result * i;

	printf("%d! = %d \n", num, result);

	return 0;
}
