#pragma warning (disable : 4996) //scanf() ���� ����
#include <stdio.h>

int main(void) {
	int N, i, fac = 1; //���� ���� �� �ʱ�ȭ

	do {
		scanf("%d", &N); //N �Է�

		fac = 1; //factorial �ʱ�ȭ
		for (i = 1; i <= N; i++) //N�� factorial ã��
			fac *= i; //factorial ���ϱ�
		
		if (N != 0) //0�� �� ��� ����
			printf("%d\n", fac); //factorial ��� �� �ٹٲ�

	} while (N != 0); //0 �Է½� �ݺ� ����

return 0; //���α׷� ���� ����
}