#pragma warning (disable:4996)	//scanf 관련 오류 해제
#include <stdio.h>

int main(void) {
	
	int N, arr[100], tmp;	//변수 선언
	scanf("%d", &N);		//N 값 입력

	for (int i = 0; i < N; i++)	//배열 접근하여
		scanf("%d", &arr[i]);	//원소 값 입력

	for (int i = 0; i < N; i++)			//N회 반복
		for (int j = 0; j < N - 1; j++) //버블 정렬
			if (arr[j] > arr[j + 1]) {	//오름차순으로 정렬
				tmp = arr[j];			//tmp를 활용하여
				arr[j] = arr[j + 1];	//큰 arr[j] 값 뒤로 
				arr[j + 1] = tmp;		//작은 arr[j + 1] 값 앞으로 이동
			}

	for (int i = 0; i < N; i++)		//정렬된 배열
		printf(" %d", arr[i]);		//출력

	return 0;
}