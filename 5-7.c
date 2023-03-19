#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N, M;
	
	scanf("%d%d", &N, &M);

	if (N == M)
		printf("RIGHT\n");
	else
	{
		if (N > M)
			printf("UP\n");
		else
			printf("DOWN\n");
		
		scanf("%d", &M);

		if (N == M)
			printf("RIGHT\n");
		else if (N > M)
			printf("UP\n");
		else
			printf("DOWN\n");
	}
		
	return 0;
}