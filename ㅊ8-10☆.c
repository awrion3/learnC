#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

/*/�Լ� �� �������� ����/*/
void die1(int);
void die2(int, int);
void die3(int, int, int);

int N;

/*/main �Լ�/*/
int main(void) {

	/*���� �� �Է�*/
	scanf("%d", &N);

	/*���� �� ���*/
	for (int i = 1; i <= 6; i++)
		die1(i);

	return 0;		   //���α׷� ���� ����//
}

/*/�Լ� ����/*/
void die1(int x) {

	for (int i = 1; i <= 6; i++)
		die2(x, i);
}

void die2(int x, int y) {

	for (int i = 1; i <= 6; i++)
		die3(x, y, i);
}

void die3(int x, int y, int z) {

	if (x + y + z == N)
		printf("%d %d %d\n", x, y, z);
}