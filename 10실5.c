#pragma warning (disable:4996)	//scanf() ���� ����
#include <stdio.h>				//ǥ������� �������

int main(void) {

	int idx, str1len = 0, str2len = 0;
	char str1[20], str2[20];

	scanf("%s%s%d", str1, str2, &idx);	//���� �Է����� �ʾƵ� ��

	//���� ���
	for (int i = 0; str1[i]; i++)	
		str1len++;

	for (int i = 0; str2[i]; i++)
		str2len++;

	//
	for (int i = str1len; i >= idx; i--) //�ڷ� ���ڿ�2 ���̸�ŭ�� �ű�� (�� ���� ����)
		str1[i + str2len] = str1[i];

	for (int j = 0; j < str2len; j++)
		str1[idx++] = str2[j]; //���ڿ� 1�� ���ڿ� 2 �����ϱ� (�� ���� ����)

	printf("%s", str1);

	return 0;
}