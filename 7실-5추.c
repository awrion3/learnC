#pragma warning (disable:4996)	//scanf 관련 오류 해제
#include <stdio.h>

int main(void) {

	int N;				//변수 선언
	scanf("%d", &N);	//정수 입력

	for (int j = 1; j <= N / 50; j++)		//50원 범위와
		for (int i = 0; i <= N / 10; i++)	//10원 범위를 고려해
			if (j * 50 + i * 10 == N)		//N원을 거스르는 방법 
				printf(" %d %d\n", j, i);	//모두 출력

	return 0;
}