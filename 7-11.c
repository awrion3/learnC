#pragma warning (disable:4996) //scanf() ���� ����
#include <stdio.h>			   //ǥ������� ���� ��� ����

int main(void) {			   /*main() �Լ�*/

	int i, mlg = 1;		    //int�� ���� ����
	double X[10], min;		//double�� ���� ����

	for (i = 0; i < 10; i++)    //for���� ���� �迭 ����
	{
		scanf("%lf", &X[i]);	//�迭�� ���� �� ����
		
		if (mlg == 1)           //�ּҰ� �ʱ�ȭ
		{
			min = X[i];		
			mlg = 0;			//�ʱ�ȭ ���� ����
		}

		if (min > X[i])		//���� ���� ��,
			min = X[i];		//�ּҰ� ����
	}

	printf("%.1f", min);	//�迭�� ����� �Ǽ� �� �ּҰ� ���

	return 0;					/*���α׷� ���� ����*/
}