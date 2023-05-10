#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

/*/함수 선언/*/
int count_3(int);

/*/main 함수/*/
int main(void) {

	/*변수 선언 및 입력*/
	int N;
	scanf("%d", &N);

	/*변수 값 계산 및 출력*/
	printf("%d", count_3(N));

	return 0;		   //프로그램 정상 종료//
}

/*/함수 정의/*/
int count_3(int x) {

	int n, v, cnt = 0;

	for (int i = 1; i <= x; i++)
	{
		n = i; //
		while (n != 0)
		{
			v = n % 10;
			if (v == 3)
				cnt++;

			n /= 10;
		}
	}

	return cnt;
}