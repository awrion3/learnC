#pragma warning(disable:4996)	//scanf ���� ���� ����
#include <stdio.h>

int factorial(int);			//�Լ� ����

int main(void) {

	int num;			//���� ����

	scanf("%d", &num);		//�� �Է�
	while (num > 0) {					//���� ���� ������ �ݺ�
		printf("%d\n", factorial(num));	//factorial ȣ���� �� ���
		scanf("%d", &num);	//�� �Է�
	}

	return 0;
}

int factorial(int x) {		//�Լ� ����

	int res = 1;					//�������� ����

	for (int i = 1; i <= x; i++)	//���丮�� ��
		res *= i;					//���ذ���

	return res;						//����� ��ȯ
}