#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

/*/함수 선언/*/
void print_row1(int);
void print_row2(int);

/*/main 함수/*/
int main(void) {

	/*변수 선언 및 입력*/
	int N;
	scanf("%d", &N);

	/*변수 값 계산 및 출력*/
	for (int i = 0; i < N; i++)
		if (i == 0 || i == N - 1)
			print_row1(N);
		else
			print_row2(N);

	return 0;		   //프로그램 정상 종료//
}

/*/함수 정의/*/
void print_row1(int n) {

	for (int i = 0; i < n; i++)
		printf("%d", n);

	printf("\n");
}

void print_row2(int n) {

	for (int i = 0; i < n; i++)
		if (i == 0 || i == n - 1)
			printf("%d", n);
		else
			printf(" ");

	printf("\n");
}