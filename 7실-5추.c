#pragma warning (disable:4996)	//scanf ���� ���� ����
#include <stdio.h>

int main(void) {

	int N;				//���� ����
	scanf("%d", &N);	//���� �Է�

	for (int j = 1; j <= N / 50; j++)		//50�� ������
		for (int i = 0; i <= N / 10; i++)	//10�� ������ �����
			if (j * 50 + i * 10 == N)		//N���� �Ž����� ��� 
				printf(" %d %d\n", j, i);	//��� ���

	return 0;
}