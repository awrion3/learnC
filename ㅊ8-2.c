#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

/*/�Լ� ����/*/
int sum (int);

/*/main �Լ�/*/
int main (void) {

	int a, b;
	scanf("%d%d", &a, &b);

	printf("%d", sum(b) - sum(a) + a); //(1 ~ b) - (1 ~ a) + a//

	return 0;					//���α׷� ���� ����//
}

/*/�Լ� ����/*/
int sum (int n) {

	return (n * (n + 1)) / 2;
}