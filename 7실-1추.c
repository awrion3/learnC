#pragma warning (disable:4996)	//scanf ���� ���� ����
#include <stdio.h>

int main(void) {

	int N, ar[100], br[100], fl, cr[200], idx = 0; //���� ���� �� �ʱ�ȭ

	scanf("%d", &N);				//�� �Է�

	for (int i = 0; i < N; i++)		//�迭 ar �����Ͽ� �� �Է�
		scanf("%d", &ar[i]);

	for (int i = 0; i < N; i++)		//�迭 br �����Ͽ� �� �Է�
		scanf("%d", &br[i]);

	for (int i = 0; i < N; i++) {	//�迭 ar�� ���Ͽ�
		fl = 1;
		for (int j = 0; j < N; j++)	//�迭 br�� ����
			if (ar[i] == br[j])		//�ߺ����� �ʴ� ar ���Ҹ�
				fl = 0;

		if (fl == 1)				//�迭 cr�� ���� 
			cr[idx++] = ar[i];		//ar - br ������ ���ϱ�
	}

	for (int i = 0; i < idx; i++)	//�迭 cr �����Ͽ�
		printf(" %d", cr[i]);		//���� ������ ����ϱ�

	return 0;
}