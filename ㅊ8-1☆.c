#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

/*/�Լ� ����/*/
int add(int, int);

/*/main �Լ�/*/
int main(void) {

	/*���� ���� �� �Է�*/
	int N, num, sum;
	scanf("%d", &N);

	/*���� �� ���*/
	num = 1; sum = 0;
	while (num <= N) {
		sum = add(num, sum);
		num++;
	}
	
	/*���� �� ���*/
	printf("%d", sum);

	return 0;		   //���α׷� ���� ����//
}

/*/�Լ� ����/*/
int add(int x, int y) {

	return x + y;
}