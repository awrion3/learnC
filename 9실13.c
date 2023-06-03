#pragma warning(disable:4996)
#include <stdio.h>

int arrsum(int*, int*); //함수 선언

int main(void) {

	int N, S, E, ar[100];	//변수 선언
	int *ap, *fp, *lp;		//포인터 선언 

	scanf("%d%d%d", &N, &S, &E);		//변수 값 입력

	for (ap = ar; ap < ar + N; ap++)	//주소로 배열 접근
		scanf("%d", ap);

	fp = ar + S; lp = ar + E;			//인덱스 주소 저장

	printf("%d", arrsum(fp, lp));		//함수 호출 및 반환값 출력

	return 0;
}

int arrsum(int *fp, int *lp) {	//인자: 포인터 둘

	int *p;			//포인터 선언
	int sum = 0;	//변수 선언 및 초기화

	for (p = fp; p <= lp; p++)	//주소로 배열 구간 접근하여
		sum += *p;				//포인터 참조한 값 더하기

	return sum;					//합 반환
}