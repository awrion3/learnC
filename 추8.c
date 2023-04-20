#pragma warning (disable : 4996) //scanf() 오류 해제
#include <stdio.h>

int main(void) {
	int N, i, j; //변수 선언

	scanf("%d", &N); //변수 입력

	for (i = 1; i <= 6; i++) //주사위 하나
		for (j = 1; j <= 6; j++) //주사위 둘의 
			if ((i + j) % N == 0) //합이 N의 배수가 되는 경우
				printf("%d %d\n", i, j); //차례로 출력하기

	return 0; //프로그램 정상 종료
}