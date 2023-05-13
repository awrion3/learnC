#pragma warning (disable:4996) //scanf() �Լ� ���� ���� �ذ�//
#include <stdio.h>			   //ǥ������� ���� ��� ����//

//�Լ� ����//
int multiple(int, int);	//���� ��, ��ȯ�� int
int maximum(int, int);	//���� ��, ��ȯ�� int
int digit_maximum(int);	//���� �ϳ�, ��ȯ�� int

//main �Լ�//
int main(void) {

	/*���� ���� �� �� �Է�*/
	int N, M, K, dmax = 0, rmax = 0;	//���� ���� �� �ʱ�ȭ
	scanf("%d%d%d", &N, &M, &K);		//���� �� �Է�

	/*���� �� ���*/
	for (int i = N; i <= M; i++)		//N���� M������ �� �߿���
		if (multiple(i, K))							//K�� ����̸�,
			dmax = maximum(dmax, digit_maximum(i));	 //(1) �� �ڸ��� �� �ִ밪���� ���� �ִ밪 ���ϱ�
		else										//K�� ����� �ƴϸ�,
			rmax = maximum(rmax, (i % K));			 //(2) ������ �߿��� ���� �ִ밪 ���ϱ�

	/*���� �� ���*/
	printf("%d", maximum(dmax, rmax));				//(1)�� (2) �� ū �� ����ϱ�

	return 0;		   //���α׷� ���� ����//
}

//�Լ� ����//
int multiple(int x, int y) {	//���� x, y ��ȯ�� int

	return (x % y == 0);		//��ȯ��: ��� Ȯ���� ���
}
int maximum(int x, int y) {		//���� x, y ��ȯ�� int

	if (x > y)					//x�� �� ũ��,
		return x;					//��ȯ��: x
	if (x < y)					//y�� �� ũ��,
		return y;					//��ȯ��: y
}
int digit_maximum(int x) {		//���� x ��ȯ�� int

	int v, max = 0;				//�������� ���� �� �ʱ�ȭ

	while (x != 0) {			//���� ������ ���� �ݺ�
		v = x % 10;					//�ڸ��� �и�
		max = maximum(v, max);	//�ڸ��� �� �ִ밪 ���ϱ�
		x /= 10;					//�ڸ��� �̵�
	}

	return max;					//��ȯ��: �� �ڸ��� �� �ִ밪
}