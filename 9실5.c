#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int arr[5], tmp, rank[5], i = 0;
	int *pr = arr, *kr = arr, *pk = rank; //������ ���� �� ����

	for (pr = arr; pr < arr + 5; pr++)
		scanf("%d", pr); //������ ����Ͽ� �迭 ���� �� �Է�
	
	for (pr = arr; pr < arr + 5; pr++) {
		*(pk + i) = 1; //�迭 ������ ��� �ʱ�ȭ
		for (kr = arr; kr < arr + 5; kr++) //�ּҷ� �迭 �����Ͽ�
			if (*pr < *kr) //������ ������ ���� ���Ͽ� ��� �ű��
				*(pk + i) += 1;
		i++; //������ �ε��� ����
	}

	for (pr = arr, pk = rank; pr < arr + 5; pr++, pk++)	//�ּҷ� �迭 �����Ͽ�
		printf("%d=r%d ", *pr, *pk); //������ ������ ���� �� ��� ���

	return 0;
}