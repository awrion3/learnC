#pragma warning (disable:4996) //scanf() 함수 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	char c[7];   	   //char형 배열 선언
	int i, cat = 0;    //int형 변수 선언

	for (i = 0; i < 7; i++)		//for문으로 배열 접근
		scanf("%c", &c[i]);		//각 원소에 문자 저장

	for (i = 1; i < 6; i++)		//for문으로 범위내 배열 접근
		if (c[i - 1] == 'c' && c[i] == 'a' && c[i + 1] == 't')
			cat++; 
		//c[i] == 'a'를 기준으로 이전 'c' 이후 't'일 시 카운트

	printf("%d", cat);	//배열에 저장된 문자 중 cat 횟수 출력

	return 0;		   //프로그램 정상 종료//
}