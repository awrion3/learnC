#pragma warning (disable:4996)
#include <stdio.h>

void ABC(int *, int);			//�Լ� ����

int main(void) {

	int *pa, ar[10], k = 10;	//������ �� ���� ���� �� �ʱ�ȭ

	for (pa = ar; pa < ar + 10; pa++)	//������ ���� �� �迭 ���� �� �Է�
		scanf("%d", pa);

	for (pa = ar; pa < ar + 9; pa++)	//�������� ���ó�� �����ϱ� ����
		ABC(pa, k--);					//�Լ� ȣ�� �ݺ�

	for (pa = ar; pa < ar + 10; pa++)	//���ĵ� �迭 �ּ� �����Ͽ�
		printf(" %d", *pa);				//������ �����Ͽ� �� ���

	return 0;
}

void ABC(int *pa, int k) {		//�Լ� ����

	int *p, tmp;				//������ �� ���� ����

	for (p = pa + 1; p < pa + k; p++)	//���޹��� ���� �ּҰ�  + 1���� �־��� ���̱���
		if (*pa < *p) {			//���޹��� ���� �ּҰ��� ���ҵ��� ���ϸ�
			tmp = *pa;			//tmp�� Ȱ���Ͽ�
			*pa = *p;			//������ �����ؼ�
			*p = tmp;			//�������� �����ϱ�
		}
}