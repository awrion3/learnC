#pragma warning (disable:4996) //scanf() �Լ� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

int main(void) {       //main() �Լ�//

	int N[5], i, j, tmp;	 //int�� ���� ����

	for (i = 0; i < 5; i++)	 //for������ �迭 ����
		scanf("%d", &N[i]);  //�� ���� �� �Է�

	for (i = 0; i < 4; i++)  //for������ �迭 �����Ͽ�
		if (N[i] > N[i + 1]) //������ ���ҳ��� ũ�� ��
		{
			tmp = N[i + 1];  //tmp�� Ȱ���Ͽ�
			N[i + 1] = N[i]; //�� ū ���� �ڷ� �ű��
			N[i] = tmp;		 //���� ���� ������ �ű��
		}

	for (i = 0; i < 5; i++)	 //for������ �迭 ����
		printf("%d\n", N[i]);  //�� ���� �� ���

	return 0;		   //���α׷� ���� ����//
}