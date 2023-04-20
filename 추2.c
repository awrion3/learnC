#pragma warning (disable : 4996) //scanf() 오류 해제
#include <stdio.h>

int main(void) { 

	int N, i; //변수 선언

	do {
		scanf("%d", &N); //N 입력

		for (i = 1; i <= N; i++) { //N의 약수 찾기
			if (!(N % i)) //약수일 시
				printf(" %d", i); //약수 출력
		}
		printf("\n"); //줄바꿈 출력
	} while (N != 0); //0 입력 전까지 반복
	
	return 0; //프로그램 정상 종료
}