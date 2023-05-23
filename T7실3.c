#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int arr[5], max1, max2;

	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	//
	if (arr[0] < arr[1]) {
		max1 = arr[1];
		max2 = arr[0];
	}
	else {
		max1 = arr[0];
		max2 = arr[1];
	}
	//
	for (int i = 1; i < 5; i++)
		if (max1 < arr[i]) {
			max2 = max1;
			max1 = arr[i];
		}
		else if (max2 < arr[i])
			max2 = arr[i];
	
	printf("%d %d", max1, max2);

	return 0;
}