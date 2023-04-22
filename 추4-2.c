#pragma warning (disable:4996) //scanf() 오류 해제
#include <stdio.h>

int main(void) {
	int N, i, j, k; //변수 선언

	scanf("%d", &N); //정수 입력

	for (i = 0; i < N; i++) //삼각형의 행 관련 변수 
	{
		for (j = 1; j < N - i; j++) //삼각형의 공백 관련 변수
			printf(" ");

		k = i + 1; //매 행마다 출력될 숫자 초기화
		for (j = 0; j <= i * 2; j++) //삼각형의 열 관련 변수
		{
			if (j < i) {     //왼쪽 부분 출력
				printf("%d", k--);
			}
			else if (j == i) //가운데 부분 출력
			{
				k = 1; //가운데는 숫자 1로 초기화
				printf("%d", k);
			}
			else             //오른쪽 부분 출력
				printf("%d", ++k);
		}
		printf("\n"); //매 행 줄바꿈 출력
	}

	return 0; //프로그램 정상 종료
}