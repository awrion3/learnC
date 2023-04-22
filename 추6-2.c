#pragma warning (disable:4996) //scanf() 오류 해제
#include <stdio.h>

int main(void) {
	int a, b, c, m; //변수 선언

	scanf("%d%d%d", &a, &b, &c); //변수 값 입력받기

	while (a > 0 && b > 0 && c > 0) { //세 숫자 중 0 이하인 수가 없을 동안 반복
		
		if (b > a && a > c) //중앙값 a인 경우 1
			m = a;
		if (c > a && a > b) //중앙값 a인 경우 2
			m = a;
		if (a > b && b > c) //중앙값 b인 경우 1
			m = b;
		if (c > b && b > a) //중앙값 b인 경우 2
			m = b;
		if (a > c && c > b) //중앙값 c인 경우 1
			m = c;
		if (b > c && c > a) //중앙값 c인 경우 2
			m = c;

		printf("%d\n", m); //세 수의 중앙값 출력

		scanf("%d%d%d", &a, &b, &c); //세 수 입력 받기
	} 

	return 0; //프로그램 정상 종료
}