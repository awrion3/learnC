#pragma warning (disable:4996) //scanf()에 대한 warning 해제
#include <stdio.h>

int main(void) {

	int N, i, j; //변수 선언

	scanf("%d", &N); //높이 N 입력

	for (i = 0; i < N; i++) { //삼각형의 높이만큼 출력
		for (j = 1; j < N - i; j++) //삼각형의 왼쪽 공백 출력 
			printf(" ");
		for (j = 0; j < i * 2 + 1; j++) //삼각형의 X와 O 출력
			if (j == 0 || j == i * 2 || i == N - 1) //삼각형에서 X를 출력할 조건
				printf("X");
			else							//삼각형에서 O를 출력할 조건
				printf("O");
		printf("\n"); //한 줄 출력 후 줄바꿈
	}

	return 0; //프로그램 정상 종료
}