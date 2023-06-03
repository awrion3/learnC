#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	char ch[20], ca, cdx; //변수 선언
	char *cp;

	cp = ch; //포인터 연결

	for (int i = 0; i < 20; i++) {
		scanf("%c", &ca); 
		if (ca == '\n') //엔터키 입력시 반복 종료
			break;
		else //포인터로 배열 접근하여 저장
			*(cp + i) = ca;
	}

	for (int i = 0; i < 20; i++) 
		if (*(cp + i) == '#') {
			cdx = i; //첫번째 # 인덱스 위치 구하기
			break;
		}

	for (int i = cdx - 1; i >= 0; i--)
		printf("%c", *(cp + i)); //첫번째 # 이전까지 문자를 역순 출력

	return 0;
}