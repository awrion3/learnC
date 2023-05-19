#pragma warning (disable:4996)	//
#include <stdio.h>				//

int main(void) {

	int arr[5], rank[5], tmp;

	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 5; i++)
	{
		rank[i] = 1; //
		for (int j = 0; j < 5; j++)
			if (i != j && arr[i] < arr[j]) //
				++rank[i];
	}

	for (int i = 0; i < 5; i++)
		printf("%d=r%d ", arr[i], rank[i]);

	return 0;
}