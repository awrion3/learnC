#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	char arr[5], i, j, k, tmp;

	for(i = 0; i < 5; i++)
		scanf("%c", &arr[i]);

	for (k = 0; k < 5; k++)	//��� 5ȸ �ݺ�
	{
		for (j = 0; j < 5; j++)	 //�迭 arr �����Ͽ� ���
			printf("%c", arr[j]);
		printf("\n");

		tmp = arr[4];			 //�Ǹ����� ĭ ������ �����صΰ�,
		for (i = 3; i >= 0; i--) //�ι�° �������������� ������
			arr[i + 1] = arr[i]; //�ϳ��� ���� �������� �̵�
		arr[0] = tmp;			 //�Ǹ����� �����ʹ� ù��° ĭ���� �̵�
	}
			 
	return 0;
}