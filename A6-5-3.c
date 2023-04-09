#pragma warning (disable:4996) //scanf()에 대한 warning 해제
#include <stdio.h>

int main(void) {

	int N, v, e = 0, o = 0; //변수 선언
	scanf("%d", &N); //정수 N입력

	while (N != 0) {
		v = N % 10; //N을 한 자리씩 떼어내서

		if (!(v % 2)) { //만약 한 자리가 짝수면,
			e += v;
			e *= 10; //짝수인 수들로 만든 수 자리이동
		}
		else {		  //만약 한 자리가 홀수면,
			o += v;
			o *= 10; //홀수인 수들로 만든 수 자리이동
		}

		N /= 10; //N은 한 자리씩 줄여나가기
	}
	printf("%d %d", e/10, o/10); //자리수 역순 짝수로만 이루어진 수, 홀수로만 이루어진 수 출력
	//단 마지막에 *10 하여 자리 이동한 값은 되돌리기

	return 0; //프로그램 정상 종료
}