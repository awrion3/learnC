#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int arr[5], tmp, rank[5], i = 0;
	int *pr = arr, *kr = arr, *pk = rank; //포인터 선언 및 연결

	for (pr = arr; pr < arr + 5; pr++)
		scanf("%d", pr); //포인터 사용하여 배열 원소 값 입력
	
	for (pr = arr; pr < arr + 5; pr++) {
		*(pk + i) = 1; //배열 원소인 등수 초기화
		for (kr = arr; kr < arr + 5; kr++) //주소로 배열 접근하여
			if (*pr < *kr) //포인터 참조로 점수 비교하여 등수 매기기
				*(pk + i) += 1;
		i++; //포인터 인덱스 조정
	}

	for (pr = arr, pk = rank; pr < arr + 5; pr++, pk++)	//주소로 배열 접근하여
		printf("%d=r%d ", *pr, *pk); //포인터 참조로 점수 및 등수 출력

	return 0;
}