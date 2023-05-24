#pragma warning (disable:4996)	//scanf 관련 오류 해제
#include <stdio.h>

int main(void) {

	int N, rank = 1;			//int형 변수 선언
	double arr[100], tmp, M;	//double형 변수 선언

	scanf("%d", &N);		//N 값 입력

	for (int i = 0; i < N; i++)	//배열 접근하여
		scanf("%lf", &arr[i]);	//double형 원소 값 입력

	scanf("%lf", &M);		//새 점수 입력

	for (int i = 0; i < N; i++)			//N회 반복
		for (int j = 0; j < N - 1; j++) //버블 정렬
			if (arr[j] < arr[j + 1]) {	//내림차순으로 정렬
				tmp = arr[j];			//tmp를 활용하여
				arr[j] = arr[j + 1];	//큰 arr[j + 1] 값 앞으로 
				arr[j + 1] = tmp;		//작은 arr[j] 값 뒤로 이동
			}

	for (int i = 0; i < N; i++)		//내림차순 정렬된 배열
		printf(" %.1f", arr[i]);		//소수 첫째자리까지 출력

	for (int i = 0; i < N; i++)		//배열 접근하여
		if (M < arr[i])				//원소 값보다 작으면
			rank++;					//순위 조정

	printf("\nHis rank is %d\n", rank);		//새 점수의 순위 출력

	return 0;
}