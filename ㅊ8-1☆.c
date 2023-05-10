#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

/*/함수 선언/*/
int add(int, int);

/*/main 함수/*/
int main(void) {

	/*변수 선언 및 입력*/
	int N, num, sum;
	scanf("%d", &N);

	/*변수 값 계산*/
	num = 1; sum = 0;
	while (num <= N) {
		sum = add(num, sum);
		num++;
	}
	
	/*변수 값 출력*/
	printf("%d", sum);

	return 0;		   //프로그램 정상 종료//
}

/*/함수 정의/*/
int add(int x, int y) {

	return x + y;
}