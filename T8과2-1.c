#pragma warning (disable:4996)
#include <stdio.h>

//
int max_num(int, int);
int min_num(int, int);

int main(void) {

	int num, A[100], idx = 0, S, E, tmp;
	int fl = 0, max, min;
	
	//
	scanf("%d", &num);
	while (num != 0) {
		A[idx++] = num;
		scanf("%d", &num);
	}

	scanf("%d%d", &S, &E);
	
	//
	for (int i = S, j = E; i < j; i++, j--) {
		tmp = A[i];
		A[i] = A[j];
		A[j] = tmp;
	}
	
	//
	for (int i = S; i <= E; i++) {
		
		if (fl == 0) {
			max = A[i];
			min = A[i];
			fl = 1;
		}
		else {
			max = max_num(max, A[i]);
			min = min_num(min, A[i]);
		}
	}

	//
	for (int i = 0; i < idx; i++)
		printf("%d ", A[i]);
	printf("\n");
	
	printf("%d %d", max, min);

	return 0;
}

//
int max_num(int N1, int N2) {

	if (N1 > N2)
		return N1;
	return N2;
}

int min_num(int N1, int N2) {

	if (N1 > N2)
		return N2;
	return N1;
}
//12 13 10 92 2 34 32 41 51 100 0
//3 7