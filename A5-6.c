#pragma warning (disable:4996)  //scanf_s() �Լ� ��� ���� ������ ���� ����
#include <stdio.h>              //ǥ������� ���� ��� ���� ����

int main(void) {                //���α׷� ���� ���� main() �Լ�

	int a, b, c;						//int�� ���� ����
	scanf("%d%d%d", &a, &b, &c);		//scanf()�� ���� 3���� ���� �Է�

	if (a + b == c)						//��Ģ���� a + b == c�� ������ ��, + ���
		printf("+\n");
	if (a - b == c)						//��Ģ���� a - b == c�� ������ ��, - ���
		printf("-\n");
	if (a * b == c)						//��Ģ���� a * b == c�� ������ ��, * ���
		printf("*\n");
	if (a / b == c)						//��Ģ���� a / b == c�� ������ ��, / ���
		printf("/\n");
	if (!(a + b == c) && !(a - b == c) && !(a * b == c) && !(a / b == c))
		printf("Incorrect");			//��Ģ���� ���谡 �������� ���� ��, Incorrect ���

	return 0;					//���α׷� ���� ����
}