#pragma warning(disable:4996) //scanf()로 인한 오류 해제
#include <stdio.h>

int main(void) {

	int N, M = 1, m, a = 0, flag = 1; //변수 선언 및 초기화
	scanf("%d", &N); //양의 정수 N입력

	while (N != 0) { //N이 0이 되기 전까지
		M *= (N % 10); //각 자리수의 곱 M
		N /= 10; //N 자리수 분리
	}

	m = M; //m에 M의 값 대입
	do {
		a += m % 10; //m의 각 자리수를 더하고,

		if (flag == 0) //처음 이후부터 적용
		{
			a *= 10; //자리수 이동
		}

		//처음에만 적용//
		if (m % 10 != 0 && flag == 1) { //m의 일의 자리수가 0이 아닐 시에만,
			a *= 10; //자리수 이동
			flag = 0; //이후 적용 안함//
		}

		m /= 10; //m 자리수 분리
	} while (m != 0); //m이 0이 되기 전까지

	printf("%d %d", M, a / 10); //각 자리수의 곱과 그 값을 역순으로 바꾼 정수 출력

	return 0; //프로그램 정상 종료
}
