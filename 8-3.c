#pragma warning (disable:4996) //scanf() ���� ���� ����
#include <stdio.h>

/*�Լ� ����*/
int sum(int);

/*main �Լ�*/
int main(void) {

	//���� ���� �� �ʱ�ȭ, �Է�//
	int N, i, res = 0;
	scanf("%d", &N);

	//���� �� ���, ���//
	for (i = 1; i <= N; i++)
		res += sum(i);		 //sum() �Լ� ȣ��

	printf("%d", res);

	return 0;		//���α׷� ���� ����
}

/*�Լ� ����*/
int sum(int n) {	//���� �ϳ�, int�� ��ȯ��

	return (n * (n + 1)) / 2; //���� ������ �� ��ȯ
}