#pragma warning(disable:4996)	//scanf ���� ���� ����
#include <stdio.h>

void PRN(int);			//�Լ� ����

int main(void) {

	int N;				//���� ����
	scanf("%d", &N);	//���� �� �Է�

	PRN(N);				//�Լ� ȣ��

	return 0;
}

void PRN(int n) {		//�Լ� ����

	for (int i = 0; i < n; i++) {				//�� �ึ��
		for (int j = 0; j < n - i; j++)			//���� ���
			printf(" ");
		for (int j = 0; j < i * 2 + 1; j++)	{	//�� ���
			if (j == 0 || j + 1 == i * 2 + 1)		//�ش� ���Ǹ�
				printf("*");						//�� ���
			else									//��������
				printf(" ");						//���� ���
		}
		printf("\n");							//�ٹٲ� ���
	}
}