#pragma warning (disable:4996)
#include<stdio.h>

int main(void)
{
	int N;

	scanf("%d", &N);

	if (!(N % 4))
	{
		if (!(N % 100))
			if (!(N % 400))
				printf("leap year");
			else
				printf("common year");
		else
			printf("leap year");
	}
	else
		printf("common year");

	return 0;
}