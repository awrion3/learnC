#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //동적할당 관련 함수를 사용하기 위한 헤더 파일 포함

int main(void) {

	int N, M, k = 0, *p = NULL, *r = NULL;
	
	scanf("%d", &N);

	//동적할당 1
	p = (int*)malloc(N * sizeof(int));

	if (p == NULL) {
		printf("failed\n");
		return -1;
	}

	//값 저장
	for (int i = 0; i < N; i++)
		p[i] = i;

	//동적할당2
	M = N - 1;
	
	r = (int*)malloc(M * sizeof(int));

	//값 대입
	for (int i = 0; i < N; i++) {
		if (i == N / 2)	//중앙값 제외
			continue;
		r[k++] = p[i];
	}

	//출력
	for (int i = 0; i < M; i++)
		printf(" %d", r[i]);

	//해제
	if (p != NULL) {
		free(p);
		p = NULL;
	}

	if (r != NULL) {
		free(r);
		r = NULL;
	}

	return 0;
}