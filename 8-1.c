#pragma warning (disable:4996) //scanf() ���� ���� ����
#include <stdio.h>

/*�Լ� ����*/
int add(int, int);

/*main �Լ�*/
int main(void) {

	//���� ���� �� �ʱ�ȭ, �� �Է�//
	int N, sum = 0, val = 1;
	scanf("%d", &N);

	//���� �� ���//
	while (val <= N) {
		sum = add(val, sum); //add() �Լ� ȣ�� �� ��ȯ�� ����
		val++;
	}

	//���� �� ���//
	printf("%d", sum);

	return 0;			//���α׷� ����
}

/*�Լ� ����*/
int add(int x, int y) { //���� ��, int�� ��ȯ

	return x + y;		//�Լ� �� ��ȯ
}