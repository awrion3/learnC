#pragma warning (disable:4996)  //scanf_s() 함수 사용 관련 컴파일 오류 해제
#include <stdio.h>              //표준입출력 관련 헤더 파일 포함

int main(void) {                //프로그램 시작 지점 main() 함수

	int n, x;					//int형 변수 n과 x 선언
	char ch;					//char형 변수 선언 

	scanf("%c%d", &ch, &n);		//scanf()를 통한 문자 ch와 숫자 n 입력

	if (ch >= 'A' && ch <= 'Z') 	 //입력받은 문자가 대문자인 경우,
	{
		x = ch - 'A' + n;			  //입력받은 문자가 'A'로부터 떨어진 거리 + n만큼 증가한 거리
		x %= 26;					  //구한 거리 x 값이 'Z'를 벗어날 때 다시 'A'로 이동하여 계산
		printf("%c", 'A' + x);		  //'A'로부터 x만큼 이동한 문자 출력
	}
	else if (ch >= 'a' && ch <= 'z') //입력받은 문자가 소문자인 경우,
	{
		x = ch - 'a' + n;			  //입력받은 문자가 'a'로부터 떨어진 거리 + n만큼 증가한 거리
		x %= 26;					  //구한 거리 x 값이 'z'를 벗어날 때 다시 'a'로 이동하여 계산
		printf("%c", 'a' + x);		  //'a'로부터 x만큼 이동한 문자 출력
	}
	else							 //입력받은 문자가 그외 특수문자 등인 경우,
		printf("%c", ch);			 //입력받은 문자 그대로 출력
		
	return 0;					//프로그램 정상 종료
}