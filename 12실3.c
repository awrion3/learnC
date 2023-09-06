#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //동적할당 관련 함수를 사용하기 위한 헤더 파일 포함

int main(void) {

	int N, D, *p = NULL;

	scanf("%d", &N);

	p = (int*)malloc(N * sizeof(int));	//1차원 배열 메모리 동적할당

	//동적할당 확인
	if (p == NULL) {
		printf("memory allocation falied\n");
		return -1;
	}

	//동적할당 사용
	for (int i = 0; i < N; i++)
		scanf("%d", &p[i]);

	scanf("%d", &D);

	//동적할당 메모리 공간 크기 변경
	p = (int*)realloc(p, (N - D) * sizeof(int)); //할당된 메모리 공간 크기 변경
												//sizeof 연산자 필요?
	for (int i = 0; i < N - D; i++)
		printf("%d\n", p[i]);

	//동적할당 해제
	if (p != NULL) {
		free(p);
		p = NULL; //댕글링 포인터 방지
	}

	return 0;
}
/*
4
120111
15011123
16011145
16011300
1
*/