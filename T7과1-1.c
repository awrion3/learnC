#pragma warning (disable: 4996)
#include <stdio.h>

int main(void) {

	int N, X[100], idx = 0;
	int num, rev, P[100], jdx = 0, tmp;

	//1 �Է�: �迭����
	scanf("%d", &N);
	
	while (N > 0) {
		X[idx++] = N;

		scanf("%d", &N);
	}

	//2 ����: �ڸ��� ȸ����
	for (int i = 0; i < idx; i++) {

		num = X[i];
		rev = 0;

		while (num != 0) {
			rev *= 10;
			rev += num % 10;
			num /= 10;
		}

		if (rev == X[i])
			P[jdx++] = X[i];
	}

	//3 ����: �������� ��������
	for (int i = 0; i < jdx - 1; i++)
		for (int j = i + 1; j < jdx; j++)
			if (P[i] < P[j]) {
				tmp = P[i];
				P[i] = P[j];
				P[j] = tmp;
			}
	
	//4 ���
	for (int i = 0; i < jdx; i++)
		printf("%d ", P[i]);

	return 0;
}
//101 3453 123 1001 7683 2334 7790 12321 3777 -1
