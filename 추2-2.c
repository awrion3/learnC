#pragma warning (disable:4996) //scanf() 오류 해제
#include <stdio.h>

int main(void) {
	int N, B, cnt = 0; //변수 선언 및 초기화

	scanf("%d", &N); //정수 값 입력
	printf("%d ", N); //입력된 정수 출력
	B = N; //입력한 정수 저장

	do {
		scanf("%d", &N); //정수 값 입력	
		
		if (B < 0 && N > 0 || B > 0 && N < 0) //정수 부호 바뀌는지 확인
		{
			cnt++; //바뀐 횟수 누적
			printf("\n"); //줄바꿈 출력
		}
		B = N; //입력한 정수 저장

		if (N != 0) //0을 제외하고
			printf("%d ", N); //입력된 정수 출력
		else        //0이면 반복 종료하기 전
			printf("\n"); //줄바꿈 출력
		
	} while (N != 0); //0 입력 전까지 반복

	printf("count = %d", cnt); //부호 바뀐 횟수 출력

	return 0; //프로그램 정상 종료
}