#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

/*/함수 선언/*/
void print_line(int, int, int);

/*/main 함수/*/
int main(void) {

	/*변수 선언 및 입력*/
	int N;
	scanf("%d", &N);

	/*변수 값 출력*/

	for (int i = 1; i <= N; i++)
		print_line(N - i, i * 2 - 1, N - i);

	return 0;		   //프로그램 정상 종료//
}

/*/함수 정의/*/
void print_line(int x, int y, int z) {

	int i;

	for (i = 0; i < x; i++)
		printf(" ");
	for (i = 0; i < y; i++)
		printf("*");
	for (i = 0; i < z; i++)
		printf(" ");

	printf("\n");
}