#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

//�Լ� ����//
int add_digits(int);

//main �Լ�//
int main(void) {

	/*���� ���� �� �� �Է�*/
	int N;
	scanf("%d", &N);

	/*���� �� ��� �� ���*/
	printf("%d %d", N, add_digits(N));

	return 0;		   //���α׷� ���� ����//
}

//�Լ� ����//
int add_digits(int N) {		//���� �ϳ�, ��ȯ�� int��

	int sum = 0;			//�������� ���� �� �ʱ�ȭ

	while (N != 0) {	//���� ������ ���� �ݺ�
		sum += N % 10;	//�� �ڸ��� ���ϱ�
		N /= 10;		//�ڸ��� �̵�
	}

	return sum;				//��ȯ��: �� �ڸ����� ��
}