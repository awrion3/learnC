#pragma warning (disable:4996) //scanf() �Լ� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

int main(void) {       //main() �Լ�//

	int i;             //int�� ���� ����
	char C[10];        //char�� ���� ����

	for (i = 0; i < 10; i++) //for������ �迭 �����Ͽ�
	{
		scanf("%c", &C[i]);  //���� �Է°� �� ���ҷ� ����
		
		if (C[i] >= 'A' && C[i] <= 'Z')  //����� ���� �빮���� ���
			printf(" %c", C[i]);		 //�빮�� ���
	}	

	return 0;		   //���α׷� ���� ����//
}