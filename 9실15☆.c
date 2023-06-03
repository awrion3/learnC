#pragma warning (disable:4996)
#include <stdio.h>

void ABC(int *, int);			//함수 선언

int main(void) {

	int *pa, ar[10], k = 10;	//포인터 등 변수 선언 및 초기화

	for (pa = ar; pa < ar + 10; pa++)	//포인터 연결 및 배열 원소 값 입력
		scanf("%d", pa);

	for (pa = ar; pa < ar + 9; pa++)	//선택정렬 방식처럼 정렬하기 위해
		ABC(pa, k--);					//함수 호출 반복

	for (pa = ar; pa < ar + 10; pa++)	//정렬된 배열 주소 접근하여
		printf(" %d", *pa);				//포인터 참조하여 값 출력

	return 0;
}

void ABC(int *pa, int k) {		//함수 정의

	int *p, tmp;				//포인터 및 변수 선언

	for (p = pa + 1; p < pa + k; p++)	//전달받은 시작 주소값  + 1부터 주어진 길이까지
		if (*pa < *p) {			//전달받은 시작 주소값과 원소들을 비교하며
			tmp = *pa;			//tmp를 활용하여
			*pa = *p;			//포인터 참조해서
			*p = tmp;			//내림차순 정렬하기
		}
}