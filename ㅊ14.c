#pragma warning (disable : 4996) //scanf() 입력 함수에 대한 오류 해제
#include <stdio.h>               //입출력 등과 관련된 헤더 파일의 포함

int main(void) { //main() 함수는 단 하나: 반환형은 int(여기선 0), 매개변수는 void(없음)

	/*변수의 선언 및 초기화*/
	int N, n, cnt = 0, flg;

	/*변수의 값 입력*/
	scanf("%d", &N);

	/*변수의 값 계산*/
	n = 2;
	while (N != 1) {
		if (N % n == 0) {
			N /= n;
			cnt++;
			flg = 1;
		}
		else {
			if (flg == 1)
				printf("%d %d\n", n, cnt);
			n++;
			cnt = 0;
			flg = 0;
		}

		if (flg == 1 && N == 1)
			printf("%d %d\n", n, cnt);
	}

	/*변수의 값 출력*/
	

	return 0;   //main() 함수의 끝: 프로그램의 정상 종료
}