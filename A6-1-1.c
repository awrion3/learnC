#pragma warning (disable:4996) //scanf()에 대한 warning 해제
#include <stdio.h>

int main(void) {

	int N, M, x = 1, i; //변수 선언 및 초기화

	scanf("%d", &N); //N개의 정수 입력

	while (x <= N) { //N회 반복해서
		scanf("%d", &M); //정수 M 입력

		printf("%d:", M); //정수 M을 출력

		for (i = 1; i <= M; i++) //정수 M의 약수 구하기
			if (!(M % i)) //나누어 떨어질 시,
				printf(" %d", i); //약수를 출력
		
		printf("\n"); //줄바꿈 출력
		x++; //N회 만큼 반복하도록 제어
	}

	return 0; //프로그램 정상 종료
}