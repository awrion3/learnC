#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int A[10], i, j, C[10], flag;

	//�Է� ����
	for (i = 0; i < 10; i++)
		scanf("%d", &A[i]);

	//Ƚ�� ����
	for (i = 0; i < 10; i++)
	{
		C[i] = 0;
		for (j = 0; j < 10; j++)
			if (A[i] == A[j])
				++C[i];
	}

	//�ߺ� ����
	for (i = 0; i < 10; i++)
	{
		flag = 0;
		for (j = 0; j < i; j++)
			if (A[i] == A[j])
				flag = 1;

		if (flag == 0)
			printf("%d %d\n", A[i], C[i]);
	}

	return 0;
}