#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[5], rak[5];

	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 5; i++) {
		rak[i] = 1;
		for (int j = 0; j < 5; j++)
			if (arr[i] < arr[j])
				++rak[i];
	}

	for (int i = 0; i < 5; i++)
		printf("%d=r%d ", arr[i], rak[i]);
		
	return 0;
}