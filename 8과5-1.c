#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

//함수 선언//
int add_digits(int);

//main 함수//
int main(void) {

	/*변수 선언 및 값 입력*/
	int N;
	scanf("%d", &N);

	/*변수 값 계산 및 출력*/
	printf("%d %d", N, add_digits(N));

	return 0;		   //프로그램 정상 종료//
}

//함수 정의//
int add_digits(int N) {		//인자 하나, 반환값 int형

	int sum = 0;			//지역변수 선언 및 초기화

	while (N != 0) {	//조건 만족할 동안 반복
		sum += N % 10;	//각 자리수 더하기
		N /= 10;		//자리수 이동
	}

	return sum;				//반환값: 각 자릿수의 합
}