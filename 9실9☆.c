#pragma warning(disable:4996)
#include <stdio.h>

int* mid(int []);
int main(void) {

	int x[3], *val;
	int *px = x;

	for (px = x; px < x + 3; px++)
		scanf("%d", px);

	val = mid(x);

	printf("%d", *val);

	return 0;
}

int* mid(int x[]) {

	int *px = x;
	static int *mdr; //�ּ� ���� �ѱ� �� static���� �ѱ�� ������

	if (*(px + 1) <= *px && *px <= *(px + 2))
		mdr = px;
	if (*(px + 1) >= *px && *px >= *(px + 2))
		mdr = px;

	if (*px <= *(px + 1) && *(px + 1) <= *(px + 2))
		mdr = px + 1;
	if (*px >= *(px + 1) && *(px + 1) >= *(px + 2))
		mdr = px + 1;

	if (*px <= *(px + 2) && *(px + 2) <= *(px + 1))
		mdr = px + 2;
	if (*px >= *(px + 2) && *(px + 2) >= *(px + 1))
		mdr = px + 2;

	return mdr; //�ּҰ��� �������� ������ ����ǹǷ�, �����Ϳ� �����.
}