#pragma warning (disable:4996) //scanf() �Լ� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

int main(void) {       //main() �Լ�//

	char c[5], i, j, s[5];	    //char�� ���� ����

	for (i = 0; i < 5; i++)	//for������ �迭 ����
	{
		scanf("%c", &c[i]);	//�� ���� �Է�
		printf("%c", c[i]); //�Է� ���� ���
	}
	printf("\n");			//�ٹٲ� ���
	
	i = 4;
	while (i != 0) {	//4ȸ ���� ��ĭ�� shift�� ��� ���//

		for (j = 0; j < 5; j++)	//for������ �迭 ����
		{
			s[j] = c[(j + 4) % 5]; //s[0] <= c[4], s[1] <= c[0]...
			printf("%c", s[j]);	   //shift�ؼ� ������ �迭 ���
		}

		for (j = 0; j < 5; j++) //for������ �迭 ����
			c[j] = s[j];		//shift�� �迭 �ٽ� ����
		printf("\n"); //�ٹٲ� ���

		i--; //�ݺ� Ƚ�� ����//
	}

	return 0;		   //���α׷� ���� ����//
}