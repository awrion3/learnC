#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, i, j;
	scanf("%d", &N); //������ �Է¹޾�,

	for (i = 0; i < N; i++) //���� ���� ���
		printf("   ");

	for (j = 1; j <= 31; j++) {
		printf("%3d", j);   //�÷��� �Ἥ ���
		if ((N + j) % 7 == 0) //�ٹٲ� ���� ����
			printf("\n");
	}

	return 0;
}