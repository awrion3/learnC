#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int arr[3][3], sum = 0;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &arr[i][j]); //�迭 �ʱ�ȭ

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (i == j)
				sum += arr[i][j]; //�� ���ϱ�

	printf("%d", sum); // �� ���

	return 0;
}