#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

/*/�Լ� ����/*/
int sum(int);

/*/main �Լ�/*/
int main(void) {

	/*���� ���� �� �Է�*/
	int X, R = 0, i;

	scanf("%d", &X);

	/*���� �� ���*/
	for (i = 1; i <= X; i++) //Xȸ �ݺ�
		R += sum(i);

	/*���� �� ���*/
	printf("%d", R);

	return 0;		   //���α׷� ���� ����//
}

/*/�Լ� ����/*/
int sum(int n) {

	return (n * (n + 1)) / 2;
}
