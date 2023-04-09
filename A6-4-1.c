#pragma warning (disable:4996) //scanf()에 대한 warning 해제
#include <stdio.h>

int main(void) {

	int T, N, t = 0, s = 0, b = 0; //변수 선언 및 초기화

	scanf("%d", &T); //한 자리 정수 입력
	N = T;

	while (T != 0) { //0이 나오기 전까지 한 자리 정수 입력

		if (N < T) //기준 N보다 입력한 정수가 큰 횟수 계산
			b++;
		else if (N > T) //기준 N보다 입력한 정수가 작은 횟수 계산
			s++;
		else		//기준 N과 입력한 정수가 같은 횟수 계산
			t++;

		scanf("%d", &T); //새 정수 입력
	}

	printf("%d %d %d", t - 1, s, b); 
	//(같은 횟수의 경우 처음에 +1 된 값 정정하여) 각각 출력

	return 0; //프로그램 정상 종료
}