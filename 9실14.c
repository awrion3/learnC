#pragma warning (disable:4996)
#include <stdio.h>

int add_to_k(int*, int*);	//함수 선언

int main(void) {

	int d[100], N, aum = 0;		//변수 선언 및 초기화
	int *dp, *p = d;			//포인터 선언 및 연결

	scanf("%d", &N);				//변수 값 입력

	for (dp = d; dp < d + N; dp++)	//배열 d 원소 값 저장
		scanf("%d", dp);

	for (dp = d; dp < d + N; dp++)	//배열 d 주소로 접근하여
		aum += add_to_k(p, dp);     //해당 구간의 합 구해서 최종 합 구하기

	printf("%d", aum);				//최종 합 출력

	return 0;
}

int add_to_k(int *fp, int *lp) { //함수 정의 (인자: 포인터 둘)

	int *p, sum = 0;	//포인터 선언 및 변수 초기화

	for (p = fp; p <= lp; p++)	//해당 구간 배열을 주소로 접근하여
		sum += *p;				//포인터 참조한 값 더하기

	return sum;					//합 반환
}