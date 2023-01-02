# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int num;
	printf("number");
	scanf("%d", &num);

	if (num < 0)
		printf("num < 0 \n");
	if (num > 0)
		printf("num > 0 \n");
	if (num == 0)
		printf("num == 0 \n");

	return 0;
}