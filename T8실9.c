#pragma warning (disable:4996)
#include <stdio.h>

//0 ����
void update_max(int);
int max1, max2;

int main(void) {
	
	int N, tmp;

	scanf("%d", &N);
	max1 = N;

	scanf("%d", &N);	//�ּ� �ι��� �Է¹޴´� �Ͽ���
	max2 = N;

	if (max1 < max2) { //��� ������ �Ʒ� ȣ�⼭ �ذ��.
		tmp = max1;	   //max2 ���� 0�̸�, ƨ�ܵ� ��������.
		max1 = max2;
		max2 = tmp;
	}

	//
	while (N != 0) {
		update_max(N);

		scanf("%d", &N);
	}

	printf("%d %d", max1, max2);

	return 0;		  

}

//1 ����
void update_max(int x) {

	if (max1 < x) {
		max2 = max1;
		max1 = x;
	}
	else if (max2 < x)
		max2 = x;
}
//22 -81 33 27 45 -23 0
//22 45 33 27 45 -23 0
