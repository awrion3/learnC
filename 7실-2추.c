#pragma warning (disable:4996)	//scanf ���� ���� ����
#include <stdio.h>

int main(void) {

	int N, x[100], L, M, isp;	//���� ����

	scanf("%d", &N);			//�� �Է�

	for (int i = 0; i < N; i++)	//�迭 x �� �Է�
		scanf("%d", &x[i]);

	scanf("%d%d", &L, &M);		//�ε��� �� �Է�

	for (int i = L; i <= M; i++) {		//�ε��� ���� �� ���鿡 ����
		isp = 1;
		for (int j = 2; j < x[i]; j++)	//�ڱ��ڽź��� ���� ������
			if (x[i] % j == 0)			//�����������
				isp = 0;				//�Ҽ� �ƴ�

		if (x[i] < 2)					//���� 2���� �۾Ƶ�
			isp = 0;					//�Ҽ� �ƴ�

		if (isp == 1)					//�迭x�� ���Ұ� �Ҽ���,
			printf(" %d", x[i]);		//��� ���
	}

	return 0;
}