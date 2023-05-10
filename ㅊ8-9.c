#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

/*/함수 선언 및 전역 변수 선언/*/
int max1, max2;

void update_max(int);

/*/main 함수/*/
int main(void) {

	/*변수 선언 및 입력*/
	int N;
	scanf("%d", &N);
	
	max1 = N; //
	max2 = N;
	
	/*변수 값 계산*/
	while (N != 0) {

		update_max(N);

		scanf("%d", &N);
	}

	/*변수 값 출력*/
	printf("%d %d", max1, max2);

	return 0;		   //프로그램 정상 종료//
}

/*/함수 정의/*/
void update_max(int x) {

	if (max1 < x)
	{
		max2 = max1;
		max1 = x;
	}
	else //
	{
		if (max2 < x)
			max2 = x;
	}
}