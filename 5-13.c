#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N, M, f, h;
	scanf("%d%d", &N, &M);

	switch (N)
	{
	case 1 :
		M = M - 500;
		f = M / 500;
		h = (M - 500 * f) / 100;
		printf("Americano\n");
		printf("%d %d", f, h);
		break;

	case 2 : 
		M = M - 400;
		f = M / 500;
		h = (M - 500 * f) / 100;
		printf("Cafe Latte\n");
		printf("%d %d", f, h);
		break;

	case 3 :
		M = M - 300;
		f = M / 500;
		h = (M - 500 * f) / 100;
		printf("Lemon Tea\n");
		printf("%d %d", f, h);
	}

	return 0;
}