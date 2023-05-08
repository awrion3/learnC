#pragma warning (disable:4996)		//scanf() 관련 오류 해결//
#include <stdio.h>				 //표준입출력 관련 헤더 파일//

/*/함수 선언/*/
int reverse_num(int);	//반환형 int (인자 int형)

/*/main 함수/*/
int main(void) {	

	/*변수 선언 및 초기화*/
	int N;							//main() 지역변수 선언

	/*변수 값 입력*/
	scanf("%d", &N);

	/*함수 호출하여 변수 값 계산 및 출력*/
	printf("%d", reverse_num(N));	//실인자 N 전달 및 반환값 출력

	return 0;						   //프로그램 정상 종료//
}

/*/함수 정의/*/
int reverse_num(int n) { //형식인자 지역변수 n 선언

	int v = 0;			 //reverse_num() 지역변수 v 선언 및 초기화

	while (n != 0) {	//거꾸로 된 정수 구하기
		v *= 10;		//자리수 한자리씩 증가
		v += n % 10;	//한자리씩 더하기

		n /= 10;		//자리수 한자리씩 감소
	}

	return v;			 //int형 값 반환
}
