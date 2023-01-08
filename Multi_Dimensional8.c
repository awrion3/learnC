#include <stdio.h>

int main(void)
{
	int arr1[2][3][4];
	double arr2[5][5][5];

	printf("H2, R3, C4 integer array: %d \n", sizeof(arr1));
	printf("H5, R5, C5 double array: %d \n", sizeof(arr2));

	return 0;
}