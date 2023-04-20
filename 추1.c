#pragma warning (disable:4996) //scanf() 오류 해제
#include <stdio.h>

int main(void) {
	char ch, ph ='z', dnt = 0, rnt = 0; //변수 선언 및 초기화

	do {
		scanf("%c", &ch); //문자 입력

		if (ph == 'd' && ch == 'o') //이전 문자 d 이번 문자 o일 시 카운트
			dnt++;
		if (ph == 'r' && ch == 'e') //이전 문자 r 이번 문자 e일 시 카운트
			rnt++;

		ph = ch; //이번 문자를 이전 문자에 저장

	} while (ch != '.'); //.이 입력되기 전까지 반복

	printf("do=%d\n", dnt); //do 입력 횟수 출력
	printf("re=%d\n", rnt); //re 입력 횟수 출력
	
	return 0; //프로그램 정상 종료
}