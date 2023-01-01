# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int num;
	int i = 0;

	printf("number: ");
	scanf("%d", &num);

	while (i < num)
	{
		printf("Hello World! \n");
		i++;
	}
	return 0;
}