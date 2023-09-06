#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //동적할당 관련 함수를 사용하기 위한 헤더 파일 포함

int main(void) {

	int N, *p = NULL;
	int sum = 0;

	scanf("%d", &N);

	p = (int*)malloc(N * sizeof(int));	//int형 배열을 위한 동적할당

	if (p == NULL) {	//동적할당 실패시 함수 비정상 종료
		printf("Not Enough Memory\n");
		return -1;
	}

	for (int i = 0; i < N; i++)	{
		scanf("%d", &p[i]); //배열 형태로 포인터 사용하여 원소에 간접 접근
		//주의: 동적할당으로 생성하였기에, 해당 배열의 이름은 없다는 점!
		sum += p[i];
	}

	printf("%d", sum);

	if (p != NULL) {
		free(p); //메모리 누수 (leak)를 막기 위해 동적할당 해제 
		p = NULL; //메모리 해제 후 포인터에는 NULL 대입 (dangling pointer 상태 방지)
	}

	return 0;
}