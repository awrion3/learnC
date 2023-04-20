#pragma warning (disable : 4996) //scanf() 오류 해제
#include <stdio.h>

int main(void) {
	int N, v = 0; //변수 선언 및 초기화

	scanf("%d", &N); //정수 N 입력

	while (N != 0) { //반복 종료 조건
		v *= 10; //자리수 이동
		v += N % 10; //자리수 역순 만들기
		N /= 10; //자리수 분리
	}

	printf("%d", v * v); //자리수 역순 제곱수 출력

	return 0; //프로그램 정상 종료
}