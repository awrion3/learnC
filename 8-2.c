#pragma warning (disable:4996) //scanf() ���� ���� ����
#include <stdio.h>

/*�Լ� ����*/
int sum(int);

/*main �Լ�*/
int main(void) {

	//���� ���� �� �ʱ�ȭ//
	int A, B, res;
	scanf("%d%d", &A, &B);

	//���� �� ���//
	res = sum(B) - sum(A) + A;	//sum() �Լ� ȣ��

	printf("%d", res);			//����� ���

	return 0;
}

/*�Լ� ����*/
int sum(int n) {	//���� �ϳ�, int�� ��ȯ��

	return (n * (n + 1)) / 2; //���� ������ �� ��ȯ
}