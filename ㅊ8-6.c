#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

/*/�Լ� ����/*/
int func1(int);

/*/main �Լ�/*/
int main(void) {

	/*���� ���� �� �Է�*/
	int N;
	scanf("%d", &N);

	/*���� �� ��� �� ���*/
	printf("%d", func1(N));

	return 0;		   //���α׷� ���� ����//
}

/*/�Լ� ����/*/
int func1(int x) {

	return 2 * (x * x) + -5 * x + 1;
}