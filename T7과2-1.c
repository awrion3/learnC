#pragma warning (disable: 4996)
#include <stdio.h>

int main(void) {

	char ch, X[100], idx = 0, fl, Y[100], jdx = 0;
	int C[100];

	//1 �Է�
	scanf("%c", &ch);
	while (ch != '!') {
		X[idx++] = ch;
		scanf("%c", &ch);
	}
	
	//2 �ߺ����� ����
	for (int i = 0; i < idx; i++) {
		fl = 1;
		for (int j = 0; j < i; j++)
			if (X[i] == X[j])
				fl = 0;

		if (fl == 1)
			Y[jdx++] = X[i];
	}

	//2 ����Ƚ�� ���
	for (int i = 0; i < jdx; i++) {		//�迭 Y�� ��������
		C[i] = 0;
		for (int j = 0; j < idx; j++)	//�迭 X�� Ƚ�� üũ
			if (Y[i] == X[j])
				++C[i];
	}
	//�ٸ� ���: �迭 Y�� �迭 C �ε��� �����ϸ� ���� ����
	  
	//3 ���� ���
	for (int i = 0; i < jdx; i++)
		printf("%c %d\n", Y[jdx - 1 - i], C[jdx - 1 - i]);

	return 0;
}
//ccccaaaattttbbbbccccaaaattttdddd!