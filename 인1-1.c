#pragma warning (disable : 4996) //scanf()�� ���� warning ����
#include <stdio.h>

int main(void) { 

	int N, P; //���� ����

	scanf("%d", &N); //�Է°��� �Է�

	while (N != 0) { //�Է°�����ŭ �ݺ�
		scanf("%d", &P); //��й�ȣ �Է�

		if (P >= 10000 && P <= 99999) //��й�ȣ �ټ��ڸ�
		{
			if (P / 10 % 10 == 0 && P % 10 == 0) //��й�ȣ�� ������ �� ���ڴ� 00
			{
				if (P / 10000 == P / 1000 % 10 && P / 1000 % 10 == P / 100 % 10) 
					printf("none\n");		//ù, ��, �� ��° �ڸ��� ��� ���� ����
				else if (P / 10000 != P / 1000 % 10 && P / 1000 % 10 != P / 100 % 10 && P / 100 % 10 != P / 10000)
					printf("none\n");		//ù, ��, �� ��° �ڸ��� ��� �ٸ��� ����
				else {
					switch (P / 100 % 10) { //�� ��° �ڸ��� �а� �ڵ�
					case 0: case 1: case 2:
						printf("CE\n"); //CE �а�
						break; //�Ʒ� ����
					case 3: case 4:
						printf("SW\n"); //SW �а�
						break; //�Ʒ� ����
					case 5:
						printf("DS\n"); //DS �а�
						break; //�Ʒ� ����
					default: 
						printf("none\n"); //�׿ܴ� none
					}
				}
			}
			else //������ ��Ű�� ���� �� none
				printf("none\n");
		}
		else //������ ��Ű�� ���� �� none
			printf("none\n");

		N--; //Nȸ ��й�ȣ �Է�
	}

	return 0;  //���α׷� ���� ����
}