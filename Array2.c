# include <stdio.h>

int main(void)
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[ ] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr3[5] = { 1, 2 };
	int a1Len, a2Len, a3Len;
	int i;

	a1Len = sizeof(arr1) / sizeof(int); // sizeof / byte
	a2Len = sizeof(arr2) / sizeof(int);
	a3Len = sizeof(arr3) / sizeof(int);

	printf("arr 1: %d \n", a1Len);
	printf("arr 2: %d \n", a2Len);
	printf("arr 3: %d \n", a3Len);

	for (i = 0; i < a3Len; i++)
		printf("%d ", arr3[i]);
	printf("\n");

	return 0;
}