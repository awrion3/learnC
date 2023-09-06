#pragma warning(disable:4996)
#include <stdio.h> //전처리 지시자 (컴파일 이전에 작동)
#define ABS(a) ((a) > 0 ? (a) : -(a))	//전처리 지시자 (매크로 함수 작성)
#define MAX(a,b) ((a) > (b) ? (a) : (b))//(정의시 각 변수에도 () 잊지 않기)

int main(void) {

	int n, max = 0, mum;

	for (int i = 0; i < 6; i++) {
		scanf("%d", &n);
		max = MAX(ABS(n), max);	//절대값이 가장 큰 수 찾기
		mum = max == ABS(n) ? n : mum;	//해당 원래 수 갱신
	}

	printf("%d %d", mum, max);

	return 0;
}