#pragma warning(disable:4996)	//scanf() 관련 오류 해제//
#include <stdio.h>				//표준입출력 관련 헤더 파일//

//원문자 해독 함수 선언
char decrypt(char, int);

//main 함수
int main(void) {

	char L[10];	//char형 배열 선언
	int i, M;	//int형 변수 선언

	for (i = 0; i < 10; i++) //for문으로 배열 L 접근하여
		scanf("%c", &L[i]);	 //10개의 문자 저장

	scanf("%d", &M);		 //암호키 정수 M 입력

	for (i = 0; i < 10; i++)			//for문으로 배열 L 접근하여
		printf("%c", decrypt(L[i], M)); //decrypt() 호출해 반환된 원문자 차례로 출력

	return 0;	//프로그램 정상 종료//
}
//함수 정의
char decrypt(char ch, int M) {			//인자: 문자 ch와 정수 M, 반환값: char형

	char res, fix;	//char형 변수 선언

	if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')	//문자인 경우 해독해서 반환//
	{
		M %= 26; //암호키 M의 크기는 알파벳 26글자의 범위 내에 있어야 함

		if (ch >= 'A' && ch <= 'Z')			//대문자인 경우
		{
			fix = 'Z' + (ch - 'A' - M) + 1; //A 전으로 간 경우, Z로 넘어가 빼기 (+1 Z와 A사이의 간격)
			res = ch - M >= 'A' ? ch - M : fix; //넘어간 경우에만 조정해서 해독 결과 대입
		}
		else if (ch >= 'a' && ch <= 'z')	//소문자인 경우
		{
			fix = 'z' + (ch - 'a' - M) + 1; //a 전으로 간 경우, z로 넘어가 빼기 (+1 z와 a사이의 간격)
			res = ch - M >= 'a' ? ch - M : fix; //넘어간 경우에만 조정해서 해독 결과 대입
		}
		return res;	 //암호화된 문자 해독한 결과 반환//
	}

	return ch;	//문자가 아닌 경우 그대로 반환//
}