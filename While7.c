# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int total = 0, i = 0;
	int num, input;

	printf("number: ");
	scanf("%d", &num);

	while (i++ < num)
	{
		printf("input: ");
		scanf("%d", &input);
		total += input;
	}
	printf("result: %f \n", (double)total / num);

	return 0;
}