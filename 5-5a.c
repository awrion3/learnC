#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int N, c;

	scanf("%d", &N);

	switch (c = !(N % 2) + !(N % 3) + !(N % 5)) {
	case 0 :
		printf("N");
		break;
	case 1 :
		printf("E");
		break;
	case 2 :
		if (!(N % 2) && !(N % 3))
			printf("B");
		if (!(N % 2) && !(N % 5))
			printf("C");
		if (!(N % 3) && !(N % 5))
			printf("D");
		break;
	case 3 :
		printf("A");
	}

	return 0;
}