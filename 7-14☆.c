#pragma warning (disable:4996) //scanf() �Լ� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

int main(void) {       //main() �Լ�//

	int i;					//int�� ���� ����
	char x[10], y[10];		//char�� �迭 ����

	for (i = 0; i < 10; i++)  //for������ �迭 x ����
		scanf("%c", &x[i]);  //10���� ���� ����

	getchar(); //���Ϲ��� �Է��Լ��� ���� enterŰ�� �Է°� �����ϱ�

	for (i = 0; i < 10; i++)  //for������ �迭 y ����
		scanf("%c", &y[i]);  //10���� ���� ����

	for (i = 0; i < 10; i++)  //for������ �迭 ����
	{
		printf(" %c", x[i]);		//�迭 x�� ���� ����ϰ�,
		printf(" %c", y[i]);		//�迭 y�� ���� ����ϱ�
	}

	return 0;		   //���α׷� ���� ����//
}