#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int ar[3], tmp;
	int *p = ar, *k = ar; //������ ����

	for (p = ar; p < ar + 3; p++) //�ּҷ� �迭 ����
		scanf("%d", p);		  //�����͸� Ȱ���� �迭 ���Ұ� �Է�

	for (p = ar; p < ar + 2; p++)	//�ּҷ� �迭 ����
		for (k = p + 1; k < ar + 3; k++)
			if (*p > *k) {	//������ �����Ͽ� �� �������� ����
				tmp = *k;
				*k = *p;
				*p = tmp;
			}

	printf("%d", *(ar + 1)); //�������� ���ĵ� �迭���� ������ �����Ͽ� �߾Ӱ� ���

	return 0;
}