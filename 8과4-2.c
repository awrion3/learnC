#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

//�Լ� ����//
int is_prime_number(int);
int count_prime_number(int, int);

//main �Լ�//
int main(void) {

	/*���� ���� �� �� �Է�*/
	int N, num, cnt = 0, max = 0, mnum;	//���� ���� �� �ʱ�ȭ
	scanf("%d", &N);					//���� N �� �Է�

	/*���� �� ���*/
	for (int i = 0; i < N; i++) {	//N���� ���� ���� �Է�
		scanf("%d", &num);			//�Է��� ���� ������ ���Ͽ�

		if (max < count_prime_number(cnt, num))	//�ش� ���� cnt �ִ밪 ���ϸ� ��
		{
			max = count_prime_number(cnt, num);	//���� ������ ���� ������ cnt �ִ밪 ����
			mnum = num;							//�ش� ������ ������ �Ҽ� ����
		}
		cnt = count_prime_number(cnt, num);	//������ cnt ���� ����//
	}

	/*���� �� ���*/
	if (max == 0)			//�Ҽ��� �ϳ��� ��������
		printf("%d", max);	//0 ���
	else							 //�� ���� ���,
		printf("%d\n%d", max, mnum); //���� ���� �ִ� ���� �� �ش� ������ ������ �Ҽ� ���

	return 0;		   //���α׷� ���� ����//
}

//�Լ� ����//
int is_prime_number(int num) {		//���� �ϳ�, int�� ��ȯ

	int isp = 1;					  //�Ҽ��� ����

	for (int i = 2; i < num; i++)	//�ش� ���� 
		if (num % i == 0)			//�����������
			isp = 0;				  //�Ҽ��� �ƴ�

	if (num == 1)					//1�� ���
		isp = 0;					  //�Ҽ��� �ƴ�

	return isp;						//��ȯ��: �Ҽ� �Ǻ� ���
}

int count_prime_number(int cnt, int num) {		//���� ��, int�� ��ȯ

	if (is_prime_number(num) && num < 100)		//�Ҽ��鼭 100�̸��� ������,
		return cnt + 1;							  //cnt + 1 ��ȯ
	else										//�� ���� ���,
		return 0;								  //0 ��ȯ
}