#pragma warning(disable:4996)	//scanf ���� ���� ����
#include <stdio.h>

int arrsum(int[ ], int, int);		//�������� �迭�� ������, �Լ� ����

int main(void) {

	int N, S, E, x[100];			//���� ����
	scanf("%d%d%d", &N, &S, &E);	//�� �Է�

	for (int i = 0; i < N; i++)		//�迭�� �����Ͽ�
		scanf("%d", &x[i]);			//�� �Է�

	printf("%d", arrsum(x, S, E));	//�Լ� ȣ�� �� ��ȯ�� ���

	return 0;
}

int arrsum(int arr[ ], int x, int y) {		//�Լ� ����

	int sum = 0;					//�������� ���� �� �ʱ�ȭ

	for (int i = x; i <= y; i++)	//�ε��� �����Ͽ�
		sum += arr[i];				//���޹��� �迭 ������ �� ���ϱ�

	return sum;						//�� ��ȯ
}
