#pragma warning (disable: 4996)
#include <stdio.h>

int main(void) {

	int N, arr[100], max, min, mx[100], mn[100];
	int fl = 0, idx = 2; //NEW
	int brr[100];

	//1 �Է�
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		brr[i] = arr[i]; //NEW
	}

	//2 ���
	for (int i = N - 1; i >= 0; i--)
		printf(" %d", arr[i]);
	printf("\n");

	while (idx > 1) { //idx++�� ����ϱ�

		//NEW
		fl = 0; idx = 0; //�ε��� ����ȭ

		//3 �ִ��ּҰ�
		for (int i = 0; i < N; i++) {

			if (fl == 0) {
				max = arr[i];
				min = brr[i];
				fl = 1;
			}
			else {
				if (max < arr[i])
					max = arr[i];
				if (min > brr[i])
					min = brr[i];
			}

			if ((i + 1) % 3 == 0 || (i + 1) == N) {
				mx[idx] = max;     //������ �͵� �����ؾ�
				mn[idx] = min;

				idx++;
				fl = 0;
			}
		}

		//4 ���
		for (int i = 0; i < idx; i++)
			printf(" %d", mx[i]);
		printf("\n");

		for (int i = 0; i < idx; i++)
			printf(" %d", mn[i]);
		printf("\n");

		//NEW
		for (int i = 0; i < idx; i++) {
			arr[i] = mx[i];
			brr[i] = mn[i];
		}
		N = idx; //�帧�� �Ʒ��� �ڸ��ؾ� ù N�� �츱 �� ����
	}

	return 0;
}
//20
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20