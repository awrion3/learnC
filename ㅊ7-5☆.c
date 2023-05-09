#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int num, N[100], idx = 0;
	int i, j, sum = 0, flag;

	scanf("%d", &N[idx++]);

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &num);
		
		flag = 0;
		for (j = 0; j < idx; j++)
			if (num == N[j])
				flag = 1;

		if (flag == 0)
			N[idx++] = num;
		else
			break;
	}

	for (i = 0; i < idx; i++)
		sum += N[i];

	printf("%d", sum);

	return 0;
}