#pragma warning (disable : 4996) //scanf() �Է� �Լ��� ���� ���� ����
#include <stdio.h>               //����� ��� ���õ� ��� ������ ����

int main(void) { //main() �Լ��� �� �ϳ�: ��ȯ���� int(���⼱ 0), �Ű������� void(����)

	/*������ ���� �� �ʱ�ȭ*/
	int N, i, j, k;

	/*������ �� �Է�*/
	scanf("%d", &N);

	/*������ �� ���*/
	for (i = 1; i <= N; i++) {

		for (j = N - i; j >= 1; j--)
			printf(" ");

		k = i;
		for (j = 1; j <= i * 2 - 1; j++)
		{
			if (j < i)
			{
				printf("%d", k--);
			}
			else if (j > i)
			{
				printf("%d", ++k);
			}
			else {
				k = 1;
				printf("%d", k);
			}
		}
		printf("\n");
	}

	for (i = N - 1; i >= 1; i--) {

		for (j = 1; j <= N - i; j++)
			printf(" ");

		k = i;
		for (j = i * 2 - 1; j >= 1; j--)
		{
			if (j > i)
			{
				printf("%d", k--);
			}
			else if (j < i)
			{
				printf("%d", ++k);
			}
			else {
				k = 1;
				printf("%d", k);
			}
		}
		printf("\n");
	}

	/*������ �� ���*/

	return 0;   //main() �Լ��� ��: ���α׷��� ���� ����
}