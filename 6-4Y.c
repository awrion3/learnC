#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {

	int n, min;

	scanf("%d", &n);
	min = n;

	while (n != 0) {
		scanf("%d", &n);
		if (n != 0 && n < min) //(n != 0) ������ �ټ� ��ġ�Ƿ�, ����� ���Ϸ��� 
			min = n;			//if ����� ���� �ø���, scanf ����� �Ʒ��� ������.
	}
	printf("%d", min);

	return 0;
}