#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

/*/�Լ� ����/*/
void print_triangle(int);

/*/main �Լ�/*/
int main(void) {

	/*���� ���� �� �Է�*/
	int N;
	scanf("%d", &N);

	/*���� �� ��� �� ���*/
	while (N > 0) {

		print_triangle(N);

		scanf("%d", &N);
	}

	return 0;		   //���α׷� ���� ����//
}

/*/�Լ� ����/*/
void print_triangle(int n) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
}