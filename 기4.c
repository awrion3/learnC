#pragma warning(disable:4996)
#include <stdio.h>

int sum_num(int[], int);

int main(void) {

	int N, M, ar[100];

	scanf("%d%d", &N, &M);

	//입력
	for (int i = 0; i < N; i++)
		scanf("%d", &ar[i]);

	//호출 및 출력
	for (int i = 0; i < N; i += M)
		printf("%d ", sum_num(&ar[i], M));

	return 0;
}

int sum_num(int x[], int M) {

	int *p = x, sum = 0;

	for (p = x; p < x + M; p++)
		sum += *p;

	return sum;
}
//9 3
//30 -10 15 20 27 7 8 -9 10