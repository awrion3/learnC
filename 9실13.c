#pragma warning(disable:4996)
#include <stdio.h>

int arrsum(int*, int*); //�Լ� ����

int main(void) {

	int N, S, E, ar[100];	//���� ����
	int *ap, *fp, *lp;		//������ ���� 

	scanf("%d%d%d", &N, &S, &E);		//���� �� �Է�

	for (ap = ar; ap < ar + N; ap++)	//�ּҷ� �迭 ����
		scanf("%d", ap);

	fp = ar + S; lp = ar + E;			//�ε��� �ּ� ����

	printf("%d", arrsum(fp, lp));		//�Լ� ȣ�� �� ��ȯ�� ���

	return 0;
}

int arrsum(int *fp, int *lp) {	//����: ������ ��

	int *p;			//������ ����
	int sum = 0;	//���� ���� �� �ʱ�ȭ

	for (p = fp; p <= lp; p++)	//�ּҷ� �迭 ���� �����Ͽ�
		sum += *p;				//������ ������ �� ���ϱ�

	return sum;					//�� ��ȯ
}