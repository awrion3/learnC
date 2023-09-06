#pragma warning (disable:4996)	//scanf() 오류 해제
#include <stdio.h>				//표준입출력 헤더파일

int main(void) {

	int idx, str1len = 0, str2len = 0;
	char str1[20], str2[20];

	scanf("%s%s%d", str1, str2, &idx);	//따로 입력하지 않아도 됨

	//길이 재기
	for (int i = 0; str1[i]; i++)	
		str1len++;

	for (int i = 0; str2[i]; i++)
		str2len++;

	//
	for (int i = str1len; i >= idx; i--) //뒤로 문자열2 길이만큼씩 옮기기 (널 문자 포함)
		str1[i + str2len] = str1[i];

	for (int j = 0; j < str2len; j++)
		str1[idx++] = str2[j]; //문자열 1에 문자열 2 삽입하기 (널 문자 제외)

	printf("%s", str1);

	return 0;
}