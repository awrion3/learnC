#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int ar[50] = { 0 }, N, cnt = 0;
	int *p = ar; //������ ���� �� ����

	scanf("%d", &N);

	for (p = ar; p < ar + N; p++) //�ּҷ� �迭 ����
		scanf("%d", p); //&ar[0]...

	for (p = ar; p < ar + N; p++)
		if (*p == 0)	//������ ���� 0�̸� �ݺ� ����
			break;
		else
			cnt++;		//0�� �ƴϸ� ���� ����

	printf("%d", cnt);

	return 0;
}
//5
//0 1 3 -2 -4