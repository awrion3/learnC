#pragma warning (disable:4996) //scanf() �Լ� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

int main(void) {       //main() �Լ�//

	int x[5], i, sum = 0, avg; //�迭 �� ���� ����

	for (i = 0; i < 5; i++)    //for������ �迭 ����
	{
		scanf("%d", &x[i]);		//�迭�� �� ����
		sum += x[i];			//���� ���ϱ�
	}

	avg = sum / 5;			   //������ ��� ���ϱ�

	for (i = 0; i < 5; i++)	   //for������ �迭 ����
		if (x[i] > avg)			 //��պ��� ū �������� ��,
			printf("%d\n", x[i]);  //�ش� ���� ����ϱ�

	return 0;		   //���α׷� ���� ����//
}