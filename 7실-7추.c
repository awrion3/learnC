#pragma warning (disable:4996)	//scanf ���� ���� ����
#include <stdio.h>

int main(void) {

	int N, rank = 1;			//int�� ���� ����
	double arr[100], tmp, M;	//double�� ���� ����

	scanf("%d", &N);		//N �� �Է�

	for (int i = 0; i < N; i++)	//�迭 �����Ͽ�
		scanf("%lf", &arr[i]);	//double�� ���� �� �Է�

	scanf("%lf", &M);		//�� ���� �Է�

	for (int i = 0; i < N; i++)			//Nȸ �ݺ�
		for (int j = 0; j < N - 1; j++) //���� ����
			if (arr[j] < arr[j + 1]) {	//������������ ����
				tmp = arr[j];			//tmp�� Ȱ���Ͽ�
				arr[j] = arr[j + 1];	//ū arr[j + 1] �� ������ 
				arr[j + 1] = tmp;		//���� arr[j] �� �ڷ� �̵�
			}

	for (int i = 0; i < N; i++)		//�������� ���ĵ� �迭
		printf(" %.1f", arr[i]);		//�Ҽ� ù°�ڸ����� ���

	for (int i = 0; i < N; i++)		//�迭 �����Ͽ�
		if (M < arr[i])				//���� ������ ������
			rank++;					//���� ����

	printf("\nHis rank is %d\n", rank);		//�� ������ ���� ���

	return 0;
}