#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, x, idx, arr[100], fl;
	int pal[100], kdx = 0, tmp; //kdx�� ���⼭ �ʱ�ȭ

	scanf("%d", &N); //

	while (N > 0) { //

		x = N; //
		idx = 0; //�ε��� �ʱ�ȭ//
		while (x != 0) {
			arr[idx++] = x % 10; //���� �ڸ����� ����
			x /= 10;
		}

		fl = 0; //�Ǻ� �ʱ�ȭ//
		for (int i = 0; i < idx; i++)
			if (arr[i] == arr[idx - 1 - i]) //������ ��Ʈ�� ��
				fl = 1;
			else
			{
				fl = 0; 
				break; //�ƴ� �� �� ����
			}

		if (fl == 1)
			pal[kdx++] = N; //ȸ���� ����
		
		scanf("%d", &N); //
	}

	for (int i = 0; i < kdx - 1;i++)
		for (int j = i + 1; j < kdx; j++) //ȸ���� �������� ��������
			if (pal[i] < pal[j]) {
				tmp = pal[i];
				pal[i] = pal[j];
				pal[j] = tmp;
			}

	for (int i = 0; i < kdx; i++) //�迭 ���
		printf("%d ", pal[i]);

	return 0;
}
