#pragma warning (disable:4996) //scanf()�� ���� warning ����
#include <stdio.h>

int main(void) {

	printf("1 %% 10 = %d\n", 1 % 10);	//1 �������� ��� ����
	printf("1 / 10 = %d\n", 1 / 10);	//0 ���� ���� (double���� �� 0.1)
	printf("10 %% 10 = %d\n", 10 % 10); //0 ���¾� ������ (��� Ȥ�� ���)
	printf("10 / 10 = %d\n", 10 / 10);  //1 ������ ������ (�ڸ��� Ȥ�� ���μ�����)

	return 0; //���α׷� ���� ����
}