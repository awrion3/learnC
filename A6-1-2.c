#pragma warning (disable:4996) //scanf()�� ���� warning ����
#include <stdio.h>

int main(void) {

	int N, M, x = 1, i, cnt = 0; //���� ���� �� �ʱ�ȭ
	int flag = 1, max, num;

	scanf("%d", &N); //N���� ���� �Է�

	while (x <= N) { //Nȸ �ݺ��ؼ�
		scanf("%d", &M); //���� M �Է�

		printf("%d:", M); //���� M�� ���

		for (i = 1; i <= M; i++) //���� M�� ��� ���ϱ�
			if (!(M % i)) { //������ ������ ��,
				printf(" %d", i); //����� ����ϰ�,
				cnt++; //����� ������ ���� ���
			}

		printf(" %d", cnt); //M�� ����� ������ ���

		if (flag == 1) { //ó�� �ʱ�ȭ
			max = cnt; //max�� ó�� �Է��� ���� ��� ������ �ʱ�ȭ
			num = M;   //num�� M�� �����Ͽ� �ʱ�ȭ
		}
		flag = 0; //�ʱ�ȭ ���� ���� ����

		if (max < cnt) { //�� �Է��� ���� ��� ������ max���� ���� ��
			max = cnt; //�� ��� ������ max ����
			num = M; //�� ������ num ����
		}
		cnt = 0; //M�� ����� ������ �ʱ�ȭ

		printf("\n"); //�ٹٲ� ���
		
		x++; //Nȸ ��ŭ �ݺ��ϵ��� ����
	}

	printf("%d", num); //���� ���� ����� ���� ���� ���

	return 0; //���α׷� ���� ����
}