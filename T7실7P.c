#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, M, arr[100], cnt = 0;

	scanf("%d%d", &N, &M);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (i != j && arr[i] + arr[j] == M) //자기자신 인덱스 중복 금지
				cnt++;

	printf("%d", cnt / 2); //교차 순서 제외

	return 0;
}
//7 9
//2 3 5 6 1 4 7