#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

/*/함수 선언/*/
void print_triangle(int);

/*/main 함수/*/
int main(void) {

	/*변수 선언 및 입력*/
	int N;
	scanf("%d", &N);

	/*변수 값 계산 및 출력*/
	while (N > 0) {

		print_triangle(N);

		scanf("%d", &N);
	}

	return 0;		   //프로그램 정상 종료//
}

/*/함수 정의/*/
void print_triangle(int n) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
}