#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[5] = { 11, 22, 33, 44, 55 }, tmp;

	for (int i = 0; i <= 5 / 2; i++) { //절반까지만 쌍 교체
		tmp = arr[i];
		arr[i] = arr[4 - i];
		arr[4 - i] = tmp;
	}

	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	return 0;
}