#pragma warning (disable:4996)	//scanf ���� ���� ����
#include <stdio.h>

int main(void) {

	int N, arr[100], n, m, a, b;	//���� ����

	scanf("%d", &N);				//�� �Է�

	for (int i = 0; i < N; i++)		//�迭 �����Ͽ�
		scanf("%d", &arr[i]);		//���� �� �Է�

	scanf("%d%d", &n, &m);			//�ε��� �� ���� �Է�
	
	b = m;								//���� ����
	for (int j = 0; j < m; j++) {	//������ŭ �ݺ�
		a = n;							//�ε��� ����
		for (int i = 0; i < N; i++)	//�迭 �����Ͽ�
			if (i == a + b - 1) {	//�ε��� ���� ��
				arr[i - 1] = arr[i];	//��ĭ�� ������ ���� ����
				a++;				//���� ���� ����
			}
		b--;						//��ĭ ����
	}

	for (int i = N - m - 1; i >= 0; i--)	//�Ųٷ� �����Ͽ�
		printf(" %d", arr[i]);				//����� �迭 ���

	return 0;
}