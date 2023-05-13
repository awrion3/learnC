#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

//함수 선언//
int add_digits(int);

//main 함수//
int main(void) {

	/*변수 선언 및 값 입력*/
	int N;					//지역변수 선언
	scanf("%d", &N);		//값 입력//

	/*변수 값 계산 및 출력*/
	while (add_digits(N) > 9) {	 //합이 한 자리수가 되면 반복 종료
		N = add_digits(N);		 //함수 호출하여 얻은 반환값을 N에 다시 대입
	}

	printf("%d", add_digits(N)); //디지털근의 값 출력

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