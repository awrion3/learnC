#pragma warning (disable:4996) //scanf() 함수 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

//함수 선언//
int multiple(int, int);	//인자 둘, 반환형 int
int maximum(int, int);	//인자 둘, 반환형 int
int digit_maximum(int);	//인자 하나, 반환형 int

//main 함수//
int main(void) {

	/*변수 선언 및 값 입력*/
	int N, M, K, dmax = 0, rmax = 0;	//변수 선언 및 초기화
	scanf("%d%d%d", &N, &M, &K);		//변수 값 입력

	/*변수 값 계산*/
	for (int i = N; i <= M; i++)		//N부터 M까지의 수 중에서
		if (multiple(i, K))							//K의 배수이면,
			dmax = maximum(dmax, digit_maximum(i));	 //(1) 각 자리수 중 최대값에서 최종 최대값 구하기
		else										//K의 배수가 아니면,
			rmax = maximum(rmax, (i % K));			 //(2) 나머지 중에서 최종 최대값 구하기

	/*변수 값 출력*/
	printf("%d", maximum(dmax, rmax));				//(1)과 (2) 중 큰 수 출력하기

	return 0;		   //프로그램 정상 종료//
}

//함수 정의//
int multiple(int x, int y) {	//인자 x, y 반환형 int

	return (x % y == 0);		//반환값: 배수 확인한 결과
}
int maximum(int x, int y) {		//인자 x, y 반환형 int

	if (x > y)					//x가 더 크면,
		return x;					//반환값: x
	if (x < y)					//y가 더 크면,
		return y;					//반환값: y
}
int digit_maximum(int x) {		//인자 x 반환형 int

	int v, max = 0;				//지역변수 선언 및 초기화

	while (x != 0) {			//조건 만족할 동안 반복
		v = x % 10;					//자리수 분리
		max = maximum(v, max);	//자리수 중 최대값 구하기
		x /= 10;					//자리수 이동
	}

	return max;					//반환값: 각 자리수 중 최대값
}