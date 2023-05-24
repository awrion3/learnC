#pragma warning(disable:4996)	//scanf ���� ���� ����
#include <stdio.h>

void order(int, int, int);		//�Լ� ����

int main(void) {

	int x, y, z;					//���� ����
	scanf("%d%d%d", &x, &y, &z);	//�� �Է�

	while (x != 0 && y != 0 && z != 0) { //���� ������ ���� �ݺ�
		order(x, y, z);	//�Լ� ȣ��

		scanf("%d%d%d", &x, &y, &z);	//�� �Է�
	}
	
	return 0;
}

void order(int x, int y, int z) {	//�Լ� ����

	int max = x, min = x, mid = x; //���� ���� ����

	if (max < y)	//�ִ밪 y
		max = y;
	if (max < z)	//�ִ밪 z
		max = z;

	if (min > y)	//�ּҰ� y
		min = y;
	if (min > z)	//�ּҰ� z
		min = z;

	if (y != max && y != min) //�߰��� y
		mid = y;
	if (z != max && z != min) //�߰��� z
		mid = z;

	printf("%d %d %d\n", max, mid, min); //�ִ� �߰� �ּҰ� ���
}