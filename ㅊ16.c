#pragma warning (disable : 4996) //scanf() �Է� �Լ��� ���� ���� ����
#include <stdio.h>               //����� ��� ���õ� ��� ������ ����

int main(void) { //main() �Լ��� �� �ϳ�: ��ȯ���� int(���⼱ 0), �Ű������� void(����)

	/*������ ���� �� �ʱ�ȭ*/
	int N, i, j, k, flag = 0;

	/*������ �� �Է�*/
	scanf("%d", &N);

	/*������ �� ���*/
	for (i = 1; i * 900 <= N; i++)
		for (j = 1; j * 750 <= N; j++)
			for (k = 1; k * 200 <= N; k++)
				if (900 * i + 750 * j + 200 * k == N)
					if ((k < i || k < j) && j % 2 == 0)
					{
						printf("%d %d %d\n", i, j, k);
						flag = 1;
					}
				
	/*������ �� ���*/
	if (flag == 0)
		printf("none");

	return 0;   //main() �Լ��� ��: ���α׷��� ���� ����
}