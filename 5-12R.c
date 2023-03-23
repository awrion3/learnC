#pragma warning (disable:4996)
#include<stdio.h>

int main(void)
{
	int N, M, f, h;

	scanf("%d%d", &N, &M);

	switch (N) {
	case 1:
		printf("Americano\n");
		M -= 500;
		f = M / 500;
		h = (M - (500 * f)) / 100;
		break;
	case 2:
		printf("Cafe Latte\n");
		M -= 400;
		f = M / 500;
		h = (M - (500 * f)) / 100;
		break;
	case 3:
		printf("Lemon Tea\n");
		M -= 300;
		f = M / 500;
		h = (M - (500 * f)) / 100;
	}

	printf("%d %d", f, h);

	return 0;
}