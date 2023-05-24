#pragma warning(disable:4996)	//scanf 관련 오류 해제
#include <stdio.h>

void PRN(int);			//함수 선언

int main(void) {

	int N;				//변수 선언
	scanf("%d", &N);	//변수 값 입력

	PRN(N);				//함수 호출

	return 0;
}

void PRN(int n) {		//함수 정의

	for (int i = 0; i < n; i++) {				//매 행마다
		for (int j = 0; j < n - i; j++)			//공백 출력
			printf(" ");
		for (int j = 0; j < i * 2 + 1; j++)	{	//별 출력
			if (j == 0 || j + 1 == i * 2 + 1)		//해당 조건만
				printf("*");						//별 출력
			else									//나머지는
				printf(" ");						//공백 출력
		}
		printf("\n");							//줄바꿈 출력
	}
}