#pragma warning(disable:4996)	//scanf 관련 오류 해제
#include <stdio.h>

int factorial(int);			//함수 선언

int main(void) {

	int num;			//변수 선언

	scanf("%d", &num);		//값 입력
	while (num > 0) {					//종료 조건 전까지 반복
		printf("%d\n", factorial(num));	//factorial 호출해 값 출력
		scanf("%d", &num);	//값 입력
	}

	return 0;
}

int factorial(int x) {		//함수 정의

	int res = 1;					//지역변수 선언

	for (int i = 1; i <= x; i++)	//팩토리얼 값
		res *= i;					//구해가기

	return res;						//결과값 반환
}