#pragma warning(disable:4996)
#include <stdio.h> //��ó�� ������ (������ ������ �۵�)
#define ABS(a) ((a) > 0 ? (a) : -(a))	//��ó�� ������ (��ũ�� �Լ� �ۼ�)
#define MAX(a,b) ((a) > (b) ? (a) : (b))//(���ǽ� �� �������� () ���� �ʱ�)

int main(void) {

	int n, max = 0, mum;

	for (int i = 0; i < 6; i++) {
		scanf("%d", &n);
		max = MAX(ABS(n), max);	//���밪�� ���� ū �� ã��
		mum = max == ABS(n) ? n : mum;	//�ش� ���� �� ����
	}

	printf("%d %d", mum, max);

	return 0;
}