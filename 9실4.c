#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int ar[3], tmp;
	int *p = ar, *k = ar; //포인터 연결

	for (p = ar; p < ar + 3; p++) //주소로 배열 접근
		scanf("%d", p);		  //포인터를 활용해 배열 원소값 입력

	for (p = ar; p < ar + 2; p++)	//주소로 배열 접근
		for (k = p + 1; k < ar + 3; k++)
			if (*p > *k) {	//포인터 참조하여 값 오름차순 정렬
				tmp = *k;
				*k = *p;
				*p = tmp;
			}

	printf("%d", *(ar + 1)); //오름차순 정렬된 배열에서 포인터 참조하여 중앙값 출력

	return 0;
}