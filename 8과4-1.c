#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

//함수 선언//
int is_prime_number(int);

//main 함수//
int main(void) {

	/*변수 선언 및 값 입력*/
	int N, M, num, cnt = 0;			//변수 선언 및 초기화
	scanf("%d%d", &N, &M);			//변수 N과 M 값 입력

	/*변수 값 계산 및 출력*/
	for (int i = 0; i < N; i++) {	//N개의 양의 정수 입력
		scanf("%d", &num);					//입력한 양의 정수에 대하여

		if (is_prime_number(num) && cnt < M)//M개의 소수 출력
		{
			printf(" %d", num);	//소수로 판별된 경우 출력
			cnt++;				//출력한 경우 cnt 증가
		}
	}

	if (cnt == 0)			//소수가 하나도 없었으면
		printf("%d", cnt);	//0 출력

	return 0;		   //프로그램 정상 종료//
}

//함수 정의//
int is_prime_number(int num) {		//인자 하나, int형 반환

	int isp = 1;					//소수로 가정

	for (int i = 2; i < num; i++)	//해당 수로 
		if (num % i == 0)			//나누어떨어지면
			isp = 0;				//소수가 아님

	if (num == 1)					//1인 경우
		isp = 0;					//소수가 아님

	return isp;						//반환값: 소수 판별 결과
}