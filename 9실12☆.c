#pragma warning (disable:4996)
#include <stdio.h>

//�Լ� ����
void addArray(int*, int*, int*, int); 

int main(void) {

	int a[20], b[20], c[20], N;    //�迭 �� ���� ����
	int *ap, *bp, *cp;			   //������ ����

	scanf("%d", &N);				//�迭 ũ�� �Է�

	for (ap = a; ap < a + N; ap++)	//������ ���� �� �迭 a �ּҷ� �����Ͽ�
		scanf("%d", ap);			//�迭 ���� �� �Է�

	for (bp = b; bp < b + N; bp++)	//������ ���� �� �迭 b �ּҷ� �����Ͽ�
		scanf("%d", bp);			//�迭 ���� �� �Է�

	addArray(a, b, c, N);			//�迭 a b c�� �迭 ũ�� ������

	for (cp = c; cp < c + N; cp++)	//������ ���� �� �迭 c �ּҷ� �����Ͽ�
		printf(" %d", *cp);			//�迭 ���� �� ���

	return 0;
}
//�Լ� ����
void addArray(int *ap, int *bp, int *cp, int n) { //������ ap bp cp�� �迭 ũ�� ��������

	int *p;	//������ ����

	for (p = cp; p < cp + n; p++) { //������ ���� �� �迭 c �ּҷ� �����Ͽ�
		*p = *ap + *(bp + n - 1);	//������ �����ϸ� �迭 a + �迭 b�� ���� �� �迭 c�� ����
		ap++;	//�迭 a �ּ� ����
		bp--;	//�迭 b �ּ� ����
	}
}