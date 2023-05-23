#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, x[100], cnt = 1, max = 1, mdx; //예외 처리 초기화

	//
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &x[i]);

	//
	mdx = N - 1; ///예외 처리 초기화
	for (int i = 0; i < N - 1; i++) //이 경우엔 i+1 고려
		if (x[i] * x[i + 1] < 0) {
			cnt++;
			if (max <= cnt) { //마지막 배열
				max = cnt;
				mdx = i + 1; //i + 1로 대입해야 함
			}
		}
		else
			cnt = 1; //최소 부분 배열은 1임

	printf("%d\n", max);
	for (int i = mdx - max + 1; i <= mdx; i++) //마지막 인덱스 - 길이 + 1 = 첫 인덱스
		printf(" %d", x[i]);

	return 0;
}
//9
//1 -5 1 -5 -4 -3 1 -3 1
//6
//-5 -1 -1 2 -2 -3