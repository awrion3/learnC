#pragma warning (disable:4996) //scanf() ���� ����
#include <stdio.h>

int main(void) {
	int N, B, cnt = 0; //���� ���� �� �ʱ�ȭ

	scanf("%d", &N); //���� �� �Է�
	printf("%d ", N); //�Էµ� ���� ���
	B = N; //�Է��� ���� ����

	do {
		scanf("%d", &N); //���� �� �Է�	
		
		if (B < 0 && N > 0 || B > 0 && N < 0) //���� ��ȣ �ٲ���� Ȯ��
		{
			cnt++; //�ٲ� Ƚ�� ����
			printf("\n"); //�ٹٲ� ���
		}
		B = N; //�Է��� ���� ����

		if (N != 0) //0�� �����ϰ�
			printf("%d ", N); //�Էµ� ���� ���
		else        //0�̸� �ݺ� �����ϱ� ��
			printf("\n"); //�ٹٲ� ���
		
	} while (N != 0); //0 �Է� ������ �ݺ�

	printf("count = %d", cnt); //��ȣ �ٲ� Ƚ�� ���

	return 0; //���α׷� ���� ����
}