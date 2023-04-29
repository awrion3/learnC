#pragma warning (disable:4996) //scanf() 함수 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	int i;					//int형 변수 선언
	char x[10], y[10];		//char형 배열 선언

	for (i = 0; i < 10; i++)  //for문으로 배열 x 접근
		scanf("%c", &x[i]);  //10개의 문자 저장

	getchar(); //단일문자 입력함수를 통해 enter키의 입력값 제외하기

	for (i = 0; i < 10; i++)  //for문으로 배열 y 접근
		scanf("%c", &y[i]);  //10개의 문자 저장

	for (i = 0; i < 10; i++)  //for문으로 배열 접근
	{
		printf(" %c", x[i]);		//배열 x의 문자 출력하고,
		printf(" %c", y[i]);		//배열 y의 문자 출력하기
	}

	return 0;		   //프로그램 정상 종료//
}