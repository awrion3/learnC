#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N;
	scanf("%d", &N);

	if ((!(N % 4) && N % 100) || !(N & 400)) //4�� ������ �������� 100���� ������ �������� �ʰų�,
		printf("L");					     //400���� ������ �������� ���,
	else				//�� �ܴ� ��� ���
		printf("C");	/*���� : ���� ������ ���� ����Կ� �־� ���ڵ� "" �����. */

	return 0;
}