#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, x[100], cnt = 1, max = 1, mdx; //���� ó�� �ʱ�ȭ

	//
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &x[i]);

	//
	mdx = N - 1; ///���� ó�� �ʱ�ȭ
	for (int i = 0; i < N - 1; i++) //�� ��쿣 i+1 ���
		if (x[i] * x[i + 1] < 0) {
			cnt++;
			if (max <= cnt) { //������ �迭
				max = cnt;
				mdx = i + 1; //i + 1�� �����ؾ� ��
			}
		}
		else
			cnt = 1; //�ּ� �κ� �迭�� 1��

	printf("%d\n", max);
	for (int i = mdx - max + 1; i <= mdx; i++) //������ �ε��� - ���� + 1 = ù �ε���
		printf(" %d", x[i]);

	return 0;
}
//9
//1 -5 1 -5 -4 -3 1 -3 1
//6
//-5 -1 -1 2 -2 -3