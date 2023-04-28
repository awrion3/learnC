#pragma warning (disable:4996) //scanf() 함수 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	/*변수 선언*/
	int X[10], Y[10], Z[10], i;		//int형 배열 X, Y, Z [크기 10]

	/*변수 값 입력*/
	for (i = 0; i < 10; i++)		//배열 X의 각 원소에 정수값 저장
		scanf("%d", &X[i]);
	for (i = 0; i < 10; i++)		//배열 Y의 각 원소에 정수값 저장
		scanf("%d", &Y[i]);

	/*변수 값 계산*/
	for (i = 0; i < 10; i++)
		Z[i] = X[i] + Y[i];			//배열 Z의 각 원소에 배열 X, Y의 정수값의 합을 저장

	/*변수 값 출력*/
	for (i = 0; i < 10; i++)		//배열 Z에 저장된 값들 출력
		printf(" %d", Z[i]);

	return 0;		   //프로그램 정상 종료//
}