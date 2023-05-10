#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

/*/함수 선언/*/
int is_prime(int);
int next_prime(int);

/*/main 함수/*/
int main(void) {

	/*변수 선언 및 입력*/
	int N, M, pnt = 0; //
	scanf("%d%d", &N, &M);

	/*변수 값 계산 및 출력*/
	for (int i = N + 1; ; i++)
	{
		if (next_prime(i) != 0)
		{
			printf("%d ", next_prime(i));
			pnt++;
		}
		if (pnt == M) //
			break;
	}

	return 0;		   //프로그램 정상 종료//
}

/*/함수 정의/*/
int is_prime(int x) {

	int isp = 1;

	for (int i = 2; i < x; i++)
		if (x % i == 0)
			isp = 0;

	return isp;
}

int next_prime(int x) {

	if (is_prime(x) == 1)
		return x;
	else
		return 0; //
}

