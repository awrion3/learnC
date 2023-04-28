#pragma warning (disable:4996) //scanf() 함수 오류 해제//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	/*변수 선언*/
	int a[10], i;			      //int형 배열 a[크기 10]

	/*변수 값 입력*/
	for (i = 0; i < 10; i++)      //for문으로 배열의 원소에 접근하여,
		scanf("%d", &a[i]);       //입력된 정수를 배열에 저장

	/*변수 값 계산 및 출력*/
	for (i = 0; i < 10; i++)
		if (a[i] % 2 == 0)	      //저장된 정수값이 2의 배수일 시,
			printf(" %d", a[i]);  //해당 배열의 원소 출력

	return 0;		   //프로그램 정상 종료//
}