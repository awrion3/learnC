#pragma warning (disable:4996)	//scanf ���� ���� ����
#include <stdio.h>

int main(void) {
	
	int N, arr[100], tmp;	//���� ����
	scanf("%d", &N);		//N �� �Է�

	for (int i = 0; i < N; i++)	//�迭 �����Ͽ�
		scanf("%d", &arr[i]);	//���� �� �Է�

	for (int i = 0; i < N; i++)			//Nȸ �ݺ�
		for (int j = 0; j < N - 1; j++) //���� ����
			if (arr[j] > arr[j + 1]) {	//������������ ����
				tmp = arr[j];			//tmp�� Ȱ���Ͽ�
				arr[j] = arr[j + 1];	//ū arr[j] �� �ڷ� 
				arr[j + 1] = tmp;		//���� arr[j + 1] �� ������ �̵�
			}

	for (int i = 0; i < N; i++)		//���ĵ� �迭
		printf(" %d", arr[i]);		//���

	return 0;
}