#pragma warning (disable:4996) //scanf() �Լ��� ���� ����
#include <stdio.h>			   //ǥ������� ���� ��� ����

int main(void) {			   //main() �Լ�

	int a[10], i, max = 0;     //int�� �迭 a [ũ�� 10]

	for (i = 0; i < 10; i++)   //for���� ����� �迭 ����
		scanf("%d", &a[i]);    //scanf()�� �迭 �� �Է�

	for (i = 0; i < 10; i++)   //for���� ����� �迭 ����
		if (max < a[i])		   //���� ���� ��
			max = a[i];		   //max �� ����

	printf("%d", max);		   //�迭�� max �� ���

	return 0;				   //���α׷� ���� ����
}