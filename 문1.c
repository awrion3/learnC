#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	double N, M, sc;		 //double�� ���� ����

	scanf("%lf%lf", &N, &M); //�� ���� �Է�

	sc = N * 0.4 + M * 0.6;  //���� ���� ����

	if (sc >= 85.5)			 //���� 'A'
		printf("A");
	else if (sc >= 75.5)     //���� 'B'
		printf("B");		 
	else if (sc >= 60.0)     //���� 'C'
		printf("C");		 
	else					 //���� 'F'
		printf("F");		 

	if (sc >= 60 || M >= 90)  //�ش� ���ؿ� ����
		printf(" PASS");
	else                      //PASS or FAIL �Ǻ�
		printf(" FAIL");

	return 0;
}