#pragma warning (disable:4996) //scanf() ���� ����
#include <stdio.h>

int main(void) {
	int a, b, c, m; //���� ����

	scanf("%d%d%d", &a, &b, &c); //���� �� �Է¹ޱ�

	while (a > 0 && b > 0 && c > 0) { //�� ���� �� 0 ������ ���� ���� ���� �ݺ�
		
		if (b > a && a > c) //�߾Ӱ� a�� ��� 1
			m = a;
		if (c > a && a > b) //�߾Ӱ� a�� ��� 2
			m = a;
		if (a > b && b > c) //�߾Ӱ� b�� ��� 1
			m = b;
		if (c > b && b > a) //�߾Ӱ� b�� ��� 2
			m = b;
		if (a > c && c > b) //�߾Ӱ� c�� ��� 1
			m = c;
		if (b > c && c > a) //�߾Ӱ� c�� ��� 2
			m = c;

		printf("%d\n", m); //�� ���� �߾Ӱ� ���

		scanf("%d%d%d", &a, &b, &c); //�� �� �Է� �ޱ�
	} 

	return 0; //���α׷� ���� ����
}