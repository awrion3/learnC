#define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>

int main(void) 
{
	int total = 0;
	int num = 1;

	while (num != 0)
	{
		printf("0 to quit: ");
		scanf("%d", &num);
		total += num;
	}
	printf("total result: %d \n", total);
	return 0;
}
