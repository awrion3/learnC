#pragma warning (disable:4996)	//scanf ���� ���� ����
#include <stdio.h>

int main(void) {

	int N, arr[100], n, m;			//���� ����

	scanf("%d", &N);				//�� �Է�

	for (int i = 0; i < N; i++)		//�迭 �Է�
		scanf("%d", &arr[i]);

	scanf("%d%d", &n, &m);			//�ε��� �� �� �Է�

	for (int i = N - 1; i >= n - 1; i--)	//�迭 ��ĭ�� �̵�
		arr[i + 1] = arr[i];

	arr[n - 1] = m;							//�ε��� ��ġ�� ���� ����

	for (int i = 0; i <= N; i++)		//�迭 ������ ������ ���
		printf(" %d", arr[N - i]);		//�ڿ������� ������ ���

	return 0;
}