#pragma warning (disable : 4996) //scanf() �Է� �Լ��� ���� ���� ����
#include <stdio.h>               //����� ��� ���õ� ��� ������ ����

int main(void) { //main() �Լ��� �� �ϳ�: ��ȯ���� int(���⼱ 0), �Ű������� void(����)

	/*������ ���� �� �ʱ�ȭ*/
	int N, i, j, k;

	/*������ �� �Է�*/
	scanf("%d", &N);

	/*������ �� ���*/
	for (i = 1; i <= 6; i++)
		for (j = 1; j <= 6; j++)
			for (k = 1; k <= 6; k++)
				if (i + j + k == N)
					printf("%d %d %d\n", i, j, k);

	/*������ �� ���*/

	return 0;   //main() �Լ��� ��: ���α׷��� ���� ����
}