#pragma warning (disable:4996) //scanf() �Լ� ���� ���� ����
#include <stdio.h>

/*�Լ� ����*/
void print_row1(int);
void print_row2(int);

/*main �Լ�*/
int main(void) {

	//���� ���� �� �� �Է�//
	int N, i;
	scanf("%d", &N);

	//���� �� ���//
	for (i = 1; i <= N; i++)
		if (i == 1 || i == N)	//ù��° �� ������ ��
			print_row1(N);			//print_row1() �Լ� ȣ��
		else					//������ ��
			print_row2(N);			//print_row2() �Լ� ȣ��

	return 0;			//���α׷� ���� ����
}

/*�Լ� ����*/
void print_row1(int x) {	 //���� �ϳ�, ��ȯ�� ����

	int j;					 //���� ����

	for (j = 0; j < x; j++)	 //x�� x���
		printf("%d", x);

	printf("\n");			 //�ٹٲ� ���
}

void print_row2(int x) {	 //���� �ϳ�, ��ȯ�� ���� 

	int j;					 //���� ����

	for (j = 0; j < x; j++)
		if (j == 0 || j == x - 1)	//2�� x���
			printf("%d", x);
		else						//���� ���
			printf(" ");

	printf("\n");			 //�ٹٲ� ���
}