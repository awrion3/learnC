#pragma warning (disable:4996) //scanf() ���� ����
#include <stdio.h>			   //ǥ������� ���� ��� ����

int main(void) {			   /*main() �Լ�*/

	int i, j, cnt, k[10] = { 0 };   //int�� ���� ����
	double x[10];		            //double�� �迭 ����

	for (i = 0; i < 10; i++)	//for���� ����
		scanf("%lf", &x[i]);	//�迭�� ���� �Ǽ��� �Է�

	for (i = 0; i < 10; i++)       //�迭�� �� ���Ҹ�
	{
		cnt = 0;				 //ī��Ʈ �ʱ�ȭ
		for (j = 0; j < 10; j++)	//�ٸ� ���ҵ�� ���Ͽ�
			if (x[i] > x[j])		//�ڽź��� ���� �Ǽ�����
				k[i] = ++cnt;	 //���� ī��Ʈ�ؼ� �迭 k�� ����
	}

	for (i = 0; i < 10; i++)	 //for������ �迭 ����
		printf(" %d", k[i]);	 //�迭 k�� �� ���� �� ���

	return 0;					/*���α׷� ���� ����*/
}