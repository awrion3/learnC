#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N;
	scanf("%d", N);

	if (N % 4 == 0) //4�� ������ �������鼭,
	{
		if (N % 400 == 0)      //400���� ������ ��������,
			printf("L");
		else if (N % 100 == 0) //�ƴ� �� �� 100���� ������ ��������,
			printf("C");
		else				   //�׵� �ƴ� ����,
			printf("L");
	}	
	else             //4�� ������ ���������� ������,
		printf("C");

	return 0;
}