#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

//�Լ� ����//
int add_digits(int);

//main �Լ�//
int main(void) {

	/*���� ���� �� �� �Է�*/
	int N, num, min, mnum, fl = 0;  //�������� ���� �� �ʱ�ȭ
	scanf("%d", &N);		//ù �� �Է�//

	/*���� �� ��� �� ���*/
	while (N >= 0) {		//���� ���� �ñ��� �ݺ�//

		num = N;			//N �� ����//
		while (add_digits(num) > 9) {	 //���� �� �ڸ����� �Ǹ� �ݺ� ����
			num = add_digits(num);		 //�Լ� ȣ���Ͽ� ���� ��ȯ���� N�� �ٽ� ����
		}

		if (fl == 0) {	//ó���� �ʱ�ȭ
			min = add_digits(num);	 //min �� �ʱ�ȭ//
			mnum = N;				 //mnum �� �ʱ�ȭ//
			fl = 1;		//���� ����
		}

		if (min > add_digits(num))	//���� ���� �����б� ���ϱ�
		{
			min = add_digits(num);	//�����б��� �� ����
			mnum = N;				//�����б��� ���� ���� ���� ����
		}

		scanf("%d", &N);	//�� �� �Է�//
	}

	printf("%d %d", mnum, min); //�����б��� ���� ���� ���� �� �����б��� �� ���

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