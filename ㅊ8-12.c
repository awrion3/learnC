#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

/*/�Լ� ����/*/
void print_line(int, int, int);

/*/main �Լ�/*/
int main(void) {

	/*���� ���� �� �Է�*/
	int N;
	scanf("%d", &N);

	/*���� �� ���*/

	for (int i = 1; i <= N; i++)
		print_line(N - i, i * 2 - 1, N - i);

	return 0;		   //���α׷� ���� ����//
}

/*/�Լ� ����/*/
void print_line(int x, int y, int z) {

	int i;

	for (i = 0; i < x; i++)
		printf(" ");
	for (i = 0; i < y; i++)
		printf("*");
	for (i = 0; i < z; i++)
		printf(" ");

	printf("\n");
}