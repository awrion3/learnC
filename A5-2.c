#pragma warning (disable:4996)  //scanf_s() �Լ� ��� ���� ������ ���� ����
#include <stdio.h>              //ǥ������� ���� ��� ���� ����

int main(void)                  //���α׷� ���� ���� main() �Լ�
{
	int a, b, c, sum = 0;			//�� �޴��� �ѱݾ� ���� ���� ���� �� �ʱ�ȭ

	scanf("%d%d%d", &a, &b, &c);	//�� �޴� �Է��� ���� scanf()

	//�޴� a
	if (a == 1)						//�޴� a�� 1 �Է� ��,
	{
		printf("Pizza\n");			//Pizza ��� �� �ѱݾ׿� 15000�� �߰�
		sum += 15000;
	}
	else if (a == 2)				//�޴� a�� 2 �Է� ��,
	{
		printf("Burger\n");			//Burger ��� �� �ѱݾ׿� 5000�� �߰�
		sum += 5000;						
	}
	else if (a == 3)				//�޴� a�� 3 �Է� ��,
	{
		printf("Salad\n");			//Salad ��� �� �ѱݾ׿� 4500�� �߰�
		sum += 4500;							
	}
	else if (a == 4)				//�޴� a�� 4 �Է� ��,
	{		
		printf("Ice cream\n");		//Ice cream ��� �� �ѱݾ׿� 800�� �߰�
		sum += 800;					
	}
	else if (a == 5) 				//�޴� a�� 5 �Է� ��,
	{	
		printf("Beverage\n");		//Beverage ��� �� �ѱݾ׿� 500�� �߰�
		sum += 500;							
	}
	else							//�޴� a�� �׿� �Է� ��,
		printf("None\n");			//None ���
	
	//�޴� b
	if (b == 1)						//�޴� b�� 1 �Է� ��,
	{
		printf("Pizza\n");			//Pizza ��� �� �ѱݾ׿� 15000�� �߰�
		sum += 15000;
	}
	else if (b == 2)				//�޴� b�� 2 �Է� ��,
	{
		printf("Burger\n");			//Burger ��� �� �ѱݾ׿� 5000�� �߰�
		sum += 5000;
	}
	else if (b == 3)				//�޴� b�� 3 �Է� ��,
	{
		printf("Salad\n");			//Salad ��� �� �ѱݾ׿� 4500�� �߰�
		sum += 4500;
	}
	else if (b == 4)				//�޴� b�� 4 �Է� ��,
	{
		printf("Ice cream\n");		//Ice cream ��� �� �ѱݾ׿� 800�� �߰�
		sum += 800;
	}
	else if (b == 5) 				//�޴� b�� 5 �Է� ��,
	{
		printf("Beverage\n");		//Beverage ��� �� �ѱݾ׿� 500�� �߰�
		sum += 500;
	}
	else							//�޴� b�� �׿� �Է� ��,
		printf("None\n");			//None ���

	//�޴� c
	if (c == 1)						//�޴� c�� 1 �Է� ��,
	{
		printf("Pizza\n");			//Pizza ��� �� �ѱݾ׿� 15000�� �߰�
		sum += 15000;
	}
	else if (c == 2)				//�޴� c�� 2 �Է� ��,
	{
		printf("Burger\n");			//Burger ��� �� �ѱݾ׿� 5000�� �߰�
		sum += 5000;
	}
	else if (c == 3)				//�޴� c�� 3 �Է� ��,
	{
		printf("Salad\n");			//Salad ��� �� �ѱݾ׿� 4500�� �߰�
		sum += 4500;
	}
	else if (c == 4)				//�޴� c�� 4 �Է� ��,
	{
		printf("Ice cream\n");		//Ice cream ��� �� �ѱݾ׿� 800�� �߰�
		sum += 800;
	}
	else if (c == 5) 				//�޴� c�� 5 �Է� ��,
	{
		printf("Beverage\n");		//Beverage ��� �� �ѱݾ׿� 500�� �߰�
		sum += 500;
	}
	else							//�޴� c�� �׿� �Է� ��,
		printf("None\n");			//None ���

	printf("Total:%dwon", sum);		//�� �� �Է��� �޴��� �������� �ѱݾ� ���

	return 0;						//���α׷� ���� ����
}