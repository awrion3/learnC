#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>	 //�����Ҵ� ���� �Լ��� ����ϱ� ���� ��� ���� ����

int main(void) {

	int N, cat = 0;
	char *p = NULL;

	scanf("%d", &N);

	//
	p = (char*)malloc(N * sizeof(char));

	if (p == NULL) {
		printf("failed\n");
		return -1;
	}

	//
	getchar();
	for (int i = 0; i < N; i++)
		scanf("%c", &p[i]);

	//
	for (int i = 1; i < N - 1; i++) 
		if (p[i - 1] == 'c' && p[i] == 'a' && p[i + 1] == 't')
			cat++;

	printf("%d\n", cat);

	//
	if (p != NULL)
		free(p);

	return 0;
}