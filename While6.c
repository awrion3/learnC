#define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>

int main(void)
{
	int num;
	int i = 9;

	printf("number: ");
	scanf("%d", &num);

	while (i>0)
	{
		printf("%d X %d = %d \n", num, i, num*i);
		i--;
	}
	return 0;
}
