#pragma warning (disable : 4996) //scanf() �Է� �Լ��� ���� ���� ����
#include <stdio.h>               //����� ��� ���õ� ��� ������ ����

int main(void) { //main() �Լ��� �� �ϳ�: ��ȯ���� int(���⼱ 0), �Ű������� void(����)

	/*������ ���� �� �ʱ�ȭ*/
	int a, b, c, max, i, j, x = 0;

	/*������ �� �Է�*/
	scanf("%d%d%d", &a, &b, &c);

	/*������ �� ���*/
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;

	for (i = 1; i <= max; i++)
	{

		if (max - x > a)
			printf(" ");
		else
			printf("*");
		
		if (max - x > b)
			printf(" ");
		else
			printf("*");
		
		if (max - x > c)
			printf(" ");
		else
			printf("*");
		
		x++;
		
		printf("\n");
	}
		
	/*������ �� ���*/

	return 0;   //main() �Լ��� ��: ���α׷��� ���� ����
}