#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

/*/�Լ� ����/*/
void print_row1(int);
void print_row2(int);

/*/main �Լ�/*/
int main(void) {

	/*���� ���� �� �Է�*/
	int N;
	scanf("%d", &N);

	/*���� �� ��� �� ���*/
	for (int i = 0; i < N; i++)
		if (i == 0 || i == N - 1)
			print_row1(N);
		else
			print_row2(N);

	return 0;		   //���α׷� ���� ����//
}

/*/�Լ� ����/*/
void print_row1(int n) {

	for (int i = 0; i < n; i++)
		printf("%d", n);

	printf("\n");
}

void print_row2(int n) {

	for (int i = 0; i < n; i++)
		if (i == 0 || i == n - 1)
			printf("%d", n);
		else
			printf(" ");

	printf("\n");
}