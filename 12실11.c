#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //동적할당 관련 함수를 사용하기 위한 헤더 파일 포함

int main(void) {

	int N, *p = NULL, k = 0, tmp[20];

	//기본 배열 (동적할당 사용)
	p = (int*)malloc(5 * sizeof(int));

	if (p == NULL) {
		printf("failed\n");
		return -1;
	}

	//realloc 없이 동적할당 새롭게 사용
	do {
		scanf("%d", &N);	//-1도 저장 되므로

		if (k >= 5 && k % 3 == 2) {

			for (int i = 0; i < k; i++)
				tmp[i] = p[i]; //백업하기
			
			free(p); //해제하고 새 메모리 공간 확보
			p = (int*)malloc((k + 3) * sizeof(int));	//배열 길이 3씩 증가

			if (p == NULL) {
				printf("failed\n");
				return -1;
			}

			for (int i = 0; i < k; i++)
				p[i] = tmp[i]; //이동하기
		}

		p[k++] = N;

	} while (N != -1 && k < 20);

	for (int i = 0; i < k; i++)
		printf(" %d", p[i]);

	//해제
	if (p != NULL) {
		free(p);
		p = NULL;
	}

	return 0;
}