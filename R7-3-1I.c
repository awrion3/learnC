#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, arr[20], rak[20], A, B;
	char abf[20];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < N; i++) {
		rak[i] = 1;
		for (int j = 0; j < N; j++)
			if (arr[i] < arr[j])
				++rak[i];
	}
	
	A = N * 0.3;
	B = N * 0.7;

	for (int i = 0; i < N; i++)
		if (rak[i] <= A)
			abf[i] = 'A';
		else if (rak[i] <= B)
			abf[i] = 'B';
		else
			abf[i] = 'F';
	
	for (int i = 0; i < N; i++)
		printf("%d %d %c\n", arr[i], rak[i], abf[i]);

	return 0;
}
//7
//50 30 90 70 70 60 20