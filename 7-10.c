#pragma warning (disable:4996) //scanf() ���� ����
#include <stdio.h>			   //ǥ������� ���� ��� ����

int main(void) {			   /*main() �Լ�*/

	int i;			        //int�� ���� ����
	double x[10] = {0};	    //double�� �迭 ���� �� �ʱ�ȭ

	for (i = 0; i < 10; i++)	//for������ �迭 [ũ�� 10] ����
		scanf("%lf", &x[i]);	//�Ǽ� X�� double�� �迭�� ����
	
	for (i = 0; i < 10; i++)	   //for������ �迭 ����
		if (x[i] > 0)				 //���� ���� ��,
			printf(" %.1f", x[i]);   //�Ҽ��� �Ʒ� ù°�ڸ����� ���
	
	return 0;					/*���α׷� ���� ����*/
}