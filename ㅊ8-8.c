#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

/*/�Լ� ����/*/
int func2(int, int, int, int);

/*/main �Լ�/*/
int main(void) {

	/*���� ���� �� �Է�*/
	int X, a, b, c, A, B, C;
	scanf("%d", &X);
	scanf("%d%d%d", &a, &b, &c);
	scanf("%d%d%d", &A, &B, &C);

	/*���� �� ��� �� ���*/
	printf("%d", func2(func2(X, a, b, c), A, B, C));

	return 0;		   //���α׷� ���� ����//
}

/*/�Լ� ����/*/
int func2(int x, int a, int b, int c) {

	return a * (x * x) + b * x + c;
}
