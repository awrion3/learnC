#pragma warning (disable : 4996) //scanf() �Է� �Լ��� ���� ���� ����
#include <stdio.h>               //����� ��� ���õ� ��� ������ ����

int main(void) { //main() �Լ��� �� �ϳ�: ��ȯ���� int(���⼱ 0), �Ű������� void(����)

	/*������ ���� �� �ʱ�ȭ*/
	int N, i, j, k = 1;

	/*������ �� �Է�*/
	scanf("%d", &N);

	/*������ �� ���*/
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d ", k++);
		printf("\n");
	}
	/*������ �� ���*/

	return 0;   //main() �Լ��� ��: ���α׷��� ���� ����
}