#pragma warning (disable : 4996) //scanf() �Է� �Լ��� ���� ���� ����
#include <stdio.h>               //����� ��� ���õ� ��� ������ ����

int main(void) { //main() �Լ��� �� �ϳ�: ��ȯ���� int(���⼱ 0), �Ű������� void(����)

	/*������ ���� �� �ʱ�ȭ*/
	int N1, N2, i, j, cnt = 0;

	/*������ �� �Է�*/
	scanf("%d%d", &N1, &N2);

	/*������ �� ���*/
	for (i = 1; i <= 9; i++) { //���� ��
		for (j = N1; j <= N2; j++) { //���� ��
			printf("%dX%d=%d ", j, i, j * i);
			cnt++;
		}
		if (cnt % 3 == 0)
			printf("\n");
	}
	
	/*������ �� ���*/

	return 0;   //main() �Լ��� ��: ���α׷��� ���� ����
}