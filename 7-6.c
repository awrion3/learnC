#pragma warning (disable: 4996) //scanf() �Լ��� ���� ����
#include <stdio.h>				//ǥ������� ���� ��� ����

int main (void) {			       //main() �Լ�

	int a[10], i, j, cnt, s[10];   //int�� �迭 [ũ�� 10]
	
	for (i = 0; i < 10; i++)       //for���� ����� �迭 ����
		scanf("%d", &a[i]);        //scanf()�� �迭 �� �Է�

	for (i = 0; i < 10; i++)       //for���� ����� �迭 ����
	{
		cnt = 0;				   //cnt �ʱ�ȭ
		for (j = 0; j < 10; j++)   //for���� ����� �迭 ����
			if (a[i] < a[j])	   //���� ���� ��
				cnt++;			   //cnt ����	
		s[i] = cnt;				   //cnt�� �迭 s�� ����
	}

	for (i = 0; i < 10; i++)	   //for���� ����� �迭 ����
		printf(" %d", s[i]);	   //�迭 ���

	return 0;				    //���α׷� ���� ����
}