#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[5], tmp;

	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 4; j++) //버블정렬은 뒤부터 정렬된다
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	
	return 0;
}