#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int arr[3][2], stu[3] = { 0 };

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			scanf("%d", &arr[i][j]);

	for (int i = 0; i < 3; i++) {
		stu[i] = arr[i][0] + arr[i][1];
		printf("%d\n", stu[i]);
	}

	return 0;
}