#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

/*/�Լ� ����/*/
int func2(int, int, int, int);

/*/main �Լ�/*/
int main(void) {

	/*���� ���� �� �Է�*/
	int X, a, b, c;
	scanf("%d", &X);
	scanf("%d%d%d", &a, &b, &c);

	/*���� �� ��� �� ���*/
	printf("%d", func2(X, a, b, c));

	return 0;		   //���α׷� ���� ����//
}

/*/�Լ� ����/*/
int func2(int x, int a, int b, int c) {

	return a * (x * x) + b * x + c;
}