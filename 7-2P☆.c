#pragma warning (disable:4996) //scanf() �Լ� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

int main(void) {       //main() �Լ�//

	char c[7];   	   //char�� �迭 ����
	int i, cat = 0;    //int�� ���� ����

	for (i = 0; i < 7; i++)		//for������ �迭 ����
		scanf("%c", &c[i]);		//�� ���ҿ� ���� ����

	for (i = 1; i < 6; i++)		//for������ ������ �迭 ����
		if (c[i - 1] == 'c' && c[i] == 'a' && c[i + 1] == 't')
			cat++; 
		//c[i] == 'a'�� �������� ���� 'c' ���� 't'�� �� ī��Ʈ

	printf("%d", cat);	//�迭�� ����� ���� �� cat Ƚ�� ���

	return 0;		   //���α׷� ���� ����//
}