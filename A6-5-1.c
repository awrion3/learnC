#pragma warning (disable:4996) //scanf()에 대한 warning 해제
#include <stdio.h>

int main(void) {

	int N, v = 0; //변수 선언

	scanf("%d", &N); //정수 N 입력

	while (N != 0) { //N이 0이 아닐 동안
		v *= 10; //자리수 이동

		v += N % 10; //한 자리씩 떼어서 더한 후
		
		N /= 10; //N은 한 자리씩 줄여나가기
	}
	printf("%d", v); //자리수 역순 출력

	return 0; //프로그램 정상 종료
}