#pragma warning (disable:4996)	//scanf() ���� ����
#include <stdio.h>				//ǥ������� �Լ� ���� �������
#include <string.h>				//���ڿ� ó�� �Լ� ���� �������//

//�Լ� ����
int check(char *);

int main(void) {

	char ar[31];		//�� ���� ���
	scanf("%s", ar);	//���� ���� �������� �ʴ�, �̹Ƿ� gets_s �ƴ� scanf ���

	//���ڿ��� ���� �Լ� �� ����� ���� �Լ� ����� ���
	printf("%d %d", strlen(ar), check(ar));

	return 0;
}

//�Լ� ����
int check(char* pa) {

	int i = 0, len, val;
	char rar[51] = { 0 };	//�� ����(�ƽ�Ű �ڵ尪 0)�� �迭 �ʱ�ȭ, ���� �߰� ���ϰԲ�

	len = strlen(pa);	//pa�� ���� �迭 �̸� ar, 0�� ������ �ּҰ�

	while (pa[i]) {		//�� ���� ������ ������, �迭 ���� ����
		rar[len - 1 - i] = pa[i++];	//�� �迭�� �ε��� ������ �迭 ���� ����
	}

	val = strcmp(rar, pa);	//rar == par�� 0 ��ȯ (��ҹ��� �ڵ� ������)

	if (val != 0)	//�� �迭�� ���� ������, �� ȸ���� �ƴϸ� 0 ��ȯ
		return 0;
	return 1;		//�⺻�� ȸ������ �Ǵ��� 1 ��ȯ

}