#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, M, arr[100], cnt = 0;

	scanf("%d%d", &N, &M);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (i != j && arr[i] + arr[j] == M) //�ڱ��ڽ� �ε��� �ߺ� ����
				cnt++;

	printf("%d", cnt / 2); //���� ���� ����

	return 0;
}
//7 9
//2 3 5 6 1 4 7