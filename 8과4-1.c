#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

//�Լ� ����//
int is_prime_number(int);

//main �Լ�//
int main(void) {

	/*���� ���� �� �� �Է�*/
	int N, M, num, cnt = 0;			//���� ���� �� �ʱ�ȭ
	scanf("%d%d", &N, &M);			//���� N�� M �� �Է�

	/*���� �� ��� �� ���*/
	for (int i = 0; i < N; i++) {	//N���� ���� ���� �Է�
		scanf("%d", &num);					//�Է��� ���� ������ ���Ͽ�

		if (is_prime_number(num) && cnt < M)//M���� �Ҽ� ���
		{
			printf(" %d", num);	//�Ҽ��� �Ǻ��� ��� ���
			cnt++;				//����� ��� cnt ����
		}
	}

	if (cnt == 0)			//�Ҽ��� �ϳ��� ��������
		printf("%d", cnt);	//0 ���

	return 0;		   //���α׷� ���� ����//
}

//�Լ� ����//
int is_prime_number(int num) {		//���� �ϳ�, int�� ��ȯ

	int isp = 1;					//�Ҽ��� ����

	for (int i = 2; i < num; i++)	//�ش� ���� 
		if (num % i == 0)			//�����������
			isp = 0;				//�Ҽ��� �ƴ�

	if (num == 1)					//1�� ���
		isp = 0;					//�Ҽ��� �ƴ�

	return isp;						//��ȯ��: �Ҽ� �Ǻ� ���
}