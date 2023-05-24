#pragma warning(disable:4996)	//scanf 관련 오류 해제
#include <stdio.h>

int arrsum(int[ ], int, int);		//형식인자 배열을 포함한, 함수 선언

int main(void) {

	int N, S, E, x[100];			//변수 선언
	scanf("%d%d%d", &N, &S, &E);	//값 입력

	for (int i = 0; i < N; i++)		//배열에 접근하여
		scanf("%d", &x[i]);			//값 입력

	printf("%d", arrsum(x, S, E));	//함수 호출 및 반환값 출력

	return 0;
}

int arrsum(int arr[ ], int x, int y) {		//함수 정의

	int sum = 0;					//지역변수 선언 및 초기화

	for (int i = x; i <= y; i++)	//인덱스 접근하여
		sum += arr[i];				//전달받은 배열 범위내 합 구하기

	return sum;						//합 반환
}
