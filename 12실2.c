#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //동적할당 관련 함수를 사용하기 위한 헤더 파일 포함

int main(void) {

	int N;
	float *p = NULL, max = 0.0;

	scanf("%d", &N);	//int형 N 변수값 입력

	p = (float*)malloc(N * sizeof(float));	//float형 배열에 동적할당

	if (p == NULL) {
		printf("memory allocation failed\n");
		return -1;
	}

	for (int i = 0; i < N; i++) {
		scanf("%f", &p[i]);	//float형 배열 원소 값 입력받기

		if (p[i] > max)
			max = p[i];
	}

	printf("%.2f", max); //float형 최대값 출력하기

	if (p != NULL) {
		free(p);	//동적할당 해제
		p = NULL;	//포인터 주소 고정
	}

	return 0;
}