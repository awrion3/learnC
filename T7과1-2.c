#pragma warning (disable: 4996)
#include <stdio.h>

int main(void) {

	int M1, M2, N, num, Y[100], idx;
	int m1, m2, m1g, m2g;
	int pl, X[100], jdx = 0, tmp;

	//1 �Է�
	scanf("%d%d", &M1, &M2);
	
	scanf("%d", &N);
	while (N > 0) {

		//2 �ڸ��� �迭
		num = N;
		idx = 0; //�ε��� �ʱ�ȭ

		while (num != 0) {
			Y[idx++] = num % 10;
			num /= 10;
		}

		//2 �ڸ��� ����
		m1 = M1; m2 = M2; 
		m1g = 0; m2g = 0;
		//
		for (int i = 0; i < idx; i++) 
			if (m1 == i) {
				Y[i] = Y[i + 1];
				m1++;
				m1g = 1;
			}
		if (m1g == 1) {
			idx--; //�ڸ���
			m2--;  //m1 < m2���� ������ ��Ȳ
		}
		//
		for (int i = 0; i < idx; i++)
			if (m2 == i) {
				Y[i] = Y[i + 1];
				m2++;
				m2g = 1;
			}
		if (m2g == 1)
			idx--; //�ڸ���
		
		//3 ȸ���� �Ǻ� ����
		pl = 1;
		for (int i = 0; i < idx; i++)
			if (Y[i] != Y[idx - 1 - i]) {
				pl = 0;
				break;
			}
		
		if (pl == 1)
			X[jdx++] = N;
		
		scanf("%d", &N);
	}

	//4 ��������
	for (int i = 0; i < jdx - 1; i++)
		for (int j = i + 1; j < jdx; j++)
			if (X[i] < X[j]) {
				tmp = X[i];
				X[i] = X[j];
				X[j] = tmp;
			}

	//5 ���
	if (jdx == 0) //�ε����� Ȯ��
		printf("none");
	else {
		for (int i = 0; i < jdx; i++)
			printf("%d ", X[i]);
	}
	
	return 0;
}
//1 3
//12021 345433 12345 1022201 768833 2334 77907 12321 37773 -1
//1 4
//12021 345433 12345 1022201 768833 2334 70907 12321 37773 -1