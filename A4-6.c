#pragma warning(disable:4996)	//scanf_s() �Լ� ��� ���� ������ ���� ����
#include <stdio.h>				//ǥ������� ���� ��� ���� ����

int main(void)					//���α׷� ���� ���� main() �Լ�
{
	int a, b, c;				//int�� ���� ����
	int m = 0;					//int�� ���� ���� �� �ʱ�ȭ

	scanf("%d%d%d", &a, &b, &c);	//�� �� �Է� : scanf() �Լ� �� ������ ���� ������ ���

	m += (b > a && a > c) * a;		//b > a > c�̸� �߰��� m = a, �ƴϸ� m = m
	m += (c > a && a > b) * a;		//c > a > b�̸� �߰��� m = a, �ƴϸ� m = m

	m += (a > b && b > c) * b;		//a > b > c�̸� �߰��� m = b, �ƴϸ� m = m
	m += (c > b && b > a) * b;		//c > b > a�̸� �߰��� m = b, �ƴϸ� m = m
		
	m += (a > c && c > b) * c;		//a > c > b�̸� �߰��� m = c, �ƴϸ� m = m
	m += (b > c && c > a) * c;		//b > c > a�̸� �߰��� m = c, �ƴϸ� m = m

	printf("%d", m);			//�Է��� �� ���� �߰��� ���

	return 0;					//���α׷� ���� ����
}