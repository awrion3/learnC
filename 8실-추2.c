#pragma warning(disable:4996)	//scanf ���� ���� ����
#include <stdio.h>

int reverse(int, int);			//�Լ� ����

int main(void) {

	int N, M;					//���� ����

	scanf("%d%d", &N, &M);		 //�� �Է�

	printf("%d", reverse(N, M)); //�Լ� ȣ�� �� ���

	return 0;
}

int reverse(int x, int y) {		//�Լ� ����

	int xum = 0, yum = 0;		//�������� ���� �� �ʱ�ȭ

	while (x != 0) {			//x ������ �� ���ϱ�
		xum *= 10;				//�ڸ��� �̵�
		xum += x % 10;			//�� �ڸ��� ���ϱ�
		x /= 10;				//�ڸ��� ����
	}

	while (y != 0) {			//y ������ �� ���ϱ�
		yum *= 10;				//�ڸ��� �̵�
		yum += y % 10;			//�� �ڸ��� ���ϱ�
		y /= 10;				//�ڸ��� ����
	}

	return xum + yum;			//�� ��ȯ
}