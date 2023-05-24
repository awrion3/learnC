#pragma warning(disable:4996)	//scanf 관련 오류 해제
#include <stdio.h>

int reverse(int, int);			//함수 선언

int main(void) {

	int N, M;					//변수 선언

	scanf("%d%d", &N, &M);		 //값 입력

	printf("%d", reverse(N, M)); //함수 호출 및 출력

	return 0;
}

int reverse(int x, int y) {		//함수 정의

	int xum = 0, yum = 0;		//지역변수 선언 및 초기화

	while (x != 0) {			//x 뒤집은 수 구하기
		xum *= 10;				//자리수 이동
		xum += x % 10;			//한 자리씩 더하기
		x /= 10;				//자리수 변경
	}

	while (y != 0) {			//y 뒤집은 수 구하기
		yum *= 10;				//자리수 이동
		yum += y % 10;			//한 자리씩 더하기
		y /= 10;				//자리수 변경
	}

	return xum + yum;			//합 반환
}