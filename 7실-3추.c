#pragma warning (disable:4996)	//scanf 관련 오류 해제
#include <stdio.h>

int main(void) {

	int N, arr[100], n, m;			//변수 선언

	scanf("%d", &N);				//값 입력

	for (int i = 0; i < N; i++)		//배열 입력
		scanf("%d", &arr[i]);

	scanf("%d%d", &n, &m);			//인덱스 및 값 입력

	for (int i = N - 1; i >= n - 1; i--)	//배열 한칸씩 이동
		arr[i + 1] = arr[i];

	arr[n - 1] = m;							//인덱스 위치에 원소 삽입

	for (int i = 0; i <= N; i++)		//배열 범위에 유의해 출력
		printf(" %d", arr[N - i]);		//뒤에서부터 접근해 출력

	return 0;
}