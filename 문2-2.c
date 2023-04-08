#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	char ch, max, min;		//char형 변수 선언
	int A = 0, a = 0, X;	//int형 변수 선언 및 초기화

	scanf("%c", &ch);		//첫 문자 입력
	max = ch;					//첫 문자로 max 초기화
	min = ch;					//첫 문자로 min 초기화

	if (ch >= 'A' && ch <= 'Z')		//첫 문자가 대문자인 경우
	{
		A = 1;					//첫 문자가 대문자
		X = 1;					//대문자 먼저 입력
	}
	if (ch >= 'a' && ch <= 'z')		//첫 문자가 소문자인 경우
	{
		a = 1;					//첫 문자가 소문자
		X = 0;					//소문자 먼저 입력
	}

	while (ch != '0') {			//숫자 문자인 '0' 입력 전까지
		scanf("%c", &ch);		//문자 입력
		if (ch >= 'A' && ch <= 'Z')		//대문자인 경우
		{
			if (min > ch)				//가장 빠른 대문자
				min = ch;
			A = 1;					//혼합문자인지 판별하기 위한 변수
		}
		if (ch >= 'a' && ch <= 'z')		//소문자인 경우
		{
			if (max < ch)				//가장 나중 소문자
				max = ch;
			a = 1;					//혼합문자인지 판별하기 위한 변수
		}
	}
	if (A == 0 && a == 1)	//소문자로만 이루어진 경우
		printf("%c", max);		//가장 나중 소문자 출력
	if (A == 1 && a == 0)	//대문자로만 이루어진 경우
		printf("%c", min);		//가장 빠른 대문자 출력
	if (A == 1 && a == 1)	//혼합문자인 경우
	{
		if (X == 0)			//첫 문자가 소문자인 경우
			printf("%c%c", max, min);	//소문자 대문자 순 출력
		else				//첫 문자가 대문자인 경우
			printf("%c%c", min, max);	//대문자 소문자 순 출력
	}

	return 0;
}