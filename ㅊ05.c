#pragma warning (disable : 4996) //scanf() �Է� �Լ��� ���� ���� ����
#include <stdio.h>               //����� ��� ���õ� ��� ������ ����

int main(void) { //main() �Լ��� �� �ϳ�: ��ȯ���� int(���⼱ 0), �Ű������� void(����)//
	
	/*������ ���� �� �ʱ�ȭ*/
	int N, M;

	/*������ �� �Է�*/
	scanf("%d", &N);

	/*������ �� ���*/
	do {	
		scanf("%d", &M);

		if (N < M)
			printf("DOWN\n");
		else if (N > M)
			printf("UP\n");
		else
			printf("RIGHT\n");

	} while (N != M);
	
	/*������ �� ���*/

	return 0; //main() �Լ��� ��: ���α׷��� ���� ����//
}