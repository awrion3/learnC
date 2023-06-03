#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	char ch[10], mch;   //char형 배열 선언
	int cf[10] = { 0 }; //int형 배열 선언 및 초기화
	char *cp = ch, *kp = ch; //char형 포인터 선언 및 연결
	int *cfp = cf;	         //int형 포인터 선언 및 연결
	int i = 0, cnt = 0, max = 0;

	for (cp = ch; cp < ch + 10; cp++) //주소로 배열 접근하여
		scanf("%c", cp);		 //배열 원소 값 입력받기

	for (cp = ch; cp < ch + 10; cp++) { //주소로 배열 접근하여
		for (kp = ch; kp < ch + 10; kp++)
			if (*cp == *kp)				//각 배열 원소의 빈도수 확인
				++*(cf + i);			//빈도수 값 배열 cf에 저장
		i++;
	}

	for (cfp = cf, cp = ch; cfp < cf + 10; cfp++, cp++) //주소로 배열 접근하여 (둘다 접근 필요)
		if (*cfp > max) {
			max = *cfp;	//최대 빈도수 및
			mch = *cp;	//해당 문자 저장
		}

	printf("%c %d", mch, max);

	return 0;
}