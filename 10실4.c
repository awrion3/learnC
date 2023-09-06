#pragma warning (disable:4996)	//scanf() 오류 해제
#include <stdio.h>				//표준입출력 헤더파일

int main(void) {

	int iseq = 1, str1len = 0;
	char str1[100], str2[100];

	scanf("%s", str1);
	scanf("%s", str2); //%c와 달리 getchar() 사용하지 않아도 됨?

	for (int i = 0; str1[i]; i++)
		str1len++;		//첫 번째 문자열의 길이 측정

	for (int i = 0; str1[i] && str2[i]; i++) { //두 문자열 중 하나라도 널 문자 만날 시 중지
		if (str1[i] != str2[i]) {
			iseq = 0;	//같지 않다고 판정
			break;		//조건 만족시 가장 가까운 반복문에서 탈출
		}
	}

	printf("%d %d", str1len, iseq); //문자열의 길이 및 일치 여부 출력

	return 0;
}