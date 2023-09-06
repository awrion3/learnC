#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //동적할당 관련 함수를 사용하기 위한 헤더 파일 포함

int main(void) {

	int N, *p = NULL, tmp;

	scanf("%d", &N);
	
	//동적할당
	p = (int*)malloc(N * sizeof(int));

	if (p == NULL) {
		printf("failed\n");
		return -1;
	}

	//값 입력
	for (int i = 0; i < N; i++)
		scanf("%d", &p[i]);

	//버블정렬 1회
	for (int i = 0; i < N - 1; i++)
		if (p[i] > p[i + 1]) {
			tmp = p[i + 1];
			p[i + 1] = p[i];
			p[i] = tmp;
		}

	//출력
	for (int i = 0; i < N; i++)
		printf("%d\n", p[i]);

	//동적할당 해제
	if (p != NULL)
		free(p);

	return 0;
}