#pragma warning (disable:4996)
#include <stdio.h>

int add_to_k(int*, int*);	//�Լ� ����

int main(void) {

	int d[100], N, aum = 0;		//���� ���� �� �ʱ�ȭ
	int *dp, *p = d;			//������ ���� �� ����

	scanf("%d", &N);				//���� �� �Է�

	for (dp = d; dp < d + N; dp++)	//�迭 d ���� �� ����
		scanf("%d", dp);

	for (dp = d; dp < d + N; dp++)	//�迭 d �ּҷ� �����Ͽ�
		aum += add_to_k(p, dp);     //�ش� ������ �� ���ؼ� ���� �� ���ϱ�

	printf("%d", aum);				//���� �� ���

	return 0;
}

int add_to_k(int *fp, int *lp) { //�Լ� ���� (����: ������ ��)

	int *p, sum = 0;	//������ ���� �� ���� �ʱ�ȭ

	for (p = fp; p <= lp; p++)	//�ش� ���� �迭�� �ּҷ� �����Ͽ�
		sum += *p;				//������ ������ �� ���ϱ�

	return sum;					//�� ��ȯ
}