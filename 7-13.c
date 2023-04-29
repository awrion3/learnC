#pragma warning (disable:4996) //scanf() 함수 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	int i;             //int형 변수 선언
	char C[10];        //char형 변수 선언

	for (i = 0; i < 10; i++) //for문으로 배열 접근하여
	{
		scanf("%c", &C[i]);  //문자 입력값 각 원소로 저장
		
		if (C[i] >= 'A' && C[i] <= 'Z')  //저장된 값이 대문자인 경우
			printf(" %c", C[i]);		 //대문자 출력
	}	

	return 0;		   //프로그램 정상 종료//
}