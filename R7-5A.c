#pragma warning (disable:4996)	//
#include <stdio.h>				//

int main(void) {

	char x[5], tmp;

	for (int i = 0; i < 5; i++)
		scanf("%c", &x[i]);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%c", x[j]);
		printf("\n");

		tmp = x[4];
		for (int j = 4; j >= 1; j--) //손실이 일어나지 않도록 시작점 지정
			x[j] = x[j - 1];
		x[0] = tmp;
	}

	return 0;
}