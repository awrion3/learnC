#pragma warning (disable:4996)	//scanf() 오류 해제
#include <stdio.h>				//표준입출력 헤더파일

int main(void) {

	int idx, str1len = 0, str2len = 0, isr;
	char str1[20], str2[20];

	scanf("%s%s%d%d", str1, str2, &idx, &isr);	//실5 + 반전 여부 확인

	//길이 재기
	for (int i = 0; str1[i]; i++)
		str1len++;

	for (int i = 0; str2[i]; i++)
		str2len++;

	//
	for (int i = str1len; i >= idx; i--) //뒤로 문자열2 길이만큼씩 옮기기 (널 문자 포함)
		str1[i + str2len] = str1[i];

	//문자열 1에 문자열 2 삽입하기 (널 문자 제외)
	if (isr == 0)	//정순일 시,
		for (int j = 0; j < str2len; j++)
			str1[idx++] = str2[j]; 
	else			//역순일 시,
		for (int j = str2len - 1; j >= 0; j--)
			str1[idx++] = str2[j]; 

	//변경된 문자열 1 출력
	printf("%s", str1);

	return 0;
}