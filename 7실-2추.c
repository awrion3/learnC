#pragma warning (disable:4996)	//scanf 관련 오류 해제
#include <stdio.h>

int main(void) {

	int N, x[100], L, M, isp;	//변수 선언

	scanf("%d", &N);			//값 입력

	for (int i = 0; i < N; i++)	//배열 x 값 입력
		scanf("%d", &x[i]);

	scanf("%d%d", &L, &M);		//인덱스 값 입력

	for (int i = L; i <= M; i++) {		//인덱스 범위 내 값들에 대해
		isp = 1;
		for (int j = 2; j < x[i]; j++)	//자기자신보다 작은 값으로
			if (x[i] % j == 0)			//나누어떨어지면
				isp = 0;				//소수 아님

		if (x[i] < 2)					//값이 2보다 작아도
			isp = 0;					//소수 아님

		if (isp == 1)					//배열x의 원소가 소수면,
			printf(" %d", x[i]);		//모두 출력
	}

	return 0;
}