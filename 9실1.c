#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	//���� ����
	int x, y, z;
	int *px, *py, *pz, *tmp;

	//������ ����
	px = &x;
	py = &y;
	pz = &z;

	//���� �� �Է�
	scanf("%d%d%d", px, py, pz);

	//�ּ� �� �̵�
	tmp = pz;
	pz = py;
	py = px;
	px = tmp;

	//������ �����Ͽ� �� ���
	printf("%d %d %d", *px, *py, *pz);

	return 0;
}