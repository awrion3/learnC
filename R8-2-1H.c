#pragma warning(disable:4996)
#include <stdio.h>

//1 선언
int max_num(int, int);
int min_num(int, int);

int main(void) {

	int arr[100], idx = 0, num;
	int S, E, tmp;
	int max, min, f = 0;

	//2 저장
	scanf("%d", &num);
	while (num != 0) {
		arr[idx++] = num;
		scanf("%d", &num);
	}

	scanf("%d%d", &S, &E);

	//3 교환
	for (int i = S, j = E; i < j; i++, j--) { //5
		tmp = arr[i];		//3 7	
		arr[i] = arr[j];	//4 6
		arr[j] = tmp;
	}
	
	//4 호출
	for (int i = S; i <= E; i++) {
		//초기화
		if (f == 0) {
			max = arr[i];
			min = arr[i];
			f = 1;
		}
		//
		max = max_num(arr[i], max);
		min = min_num(arr[i], min);
	}

	//6 출력
	for (int i = 0; i < idx; i++)
		printf("%d ", arr[i]);
	printf("\n%d %d", max, min);

	return 0;
}

//5 정의
int max_num(int N1, int N2) { //인수는 두 정수임에 유의
	//비교
	if (N1 > N2)
		return N1;
	//
	return N2;
}

int min_num(int N1, int N2) {
	//
	if (N1 > N2)
		return N2;
	//
	return N1;
}
//12 13 10 92 2 34 32 41 51 100 0
//3 7