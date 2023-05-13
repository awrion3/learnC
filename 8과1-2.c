#pragma warning(disable:4996)	//scanf() 관련 오류 해제//
#include <stdio.h>				//표준입출력 관련 헤더 파일//

//함수 선언
char decrypt(char, int); //원문자 해독 함수
char encrypt(char, int); //문자 암호화 함수

//main 함수
int main(void) {

	char L[100], ch;	  //char형 변수 선언
	int i, idx, M1, M2;	  //int형 변수 선언

	scanf("%c", &ch);     //첫 문자 입력
	
	idx = 0;			//인덱스 초기화//
	while (ch != '*') { //조건 만족할 동안 반복
		L[idx++] = ch;	//배열 L에 문자 저장

		scanf("%c", &ch); //문자 입력	
	}	 

	scanf("%d%d", &M1, &M2); //암호키 정수 M1, M2 입력

	for (i = 0; i < idx; i++)			 //for문으로 배열 L 접근하여
		printf("%c", decrypt(L[i], M1)); //decrypt() 호출해 반환된 원문자 차례로 출력
	
	printf("\n"); //줄바꿈 출력

	for (i = 0; i < idx; i++)			//for문으로 배열 L 접근하여
		printf("%c", encrypt(decrypt(L[i], M1), M2)); //반환된 원문자를 encrypt() 호출해 다시 암호화하여 출력

	return 0;	//프로그램 정상 종료//
}

//함수 정의1
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
//함수 정의2
char encrypt(char ch, int M) {			//인자: 문자 ch와 정수 M, 반환값: char형

	char res, fix;	//char형 변수 선언

	if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')	//문자인 경우 암호화해서 반환//
	{
		M %= 26; //암호키 M의 크기는 알파벳 26글자의 범위 내에 있어야 함

		if (ch >= 'A' && ch <= 'Z')			//대문자인 경우
		{
			fix = 'A' + (ch - 'Z' + M) - 1; //Z 후로 간 경우, A로 넘어가 더하기 (-1 Z와 A사이의 간격)
			res = ch + M <= 'Z' ? ch + M : fix; //넘어간 경우에만 조정해서 암호화 결과 대입
		}
		else if (ch >= 'a' && ch <= 'z')	//소문자인 경우
		{
			fix = 'a' + (ch - 'z' + M) - 1; //z 후로 간 경우, a로 넘어가 더하기 (-1 z와 a사이의 간격)
			res = ch + M <= 'z' ? ch + M : fix; //넘어간 경우에만 조정해서 암호화 결과 대입
		}
		return res;	 //암호화된 문자 결과 반환//
	}

	return ch;	//문자가 아닌 경우 그대로 반환//
}