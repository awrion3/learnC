#include <stdio.h>

int main(void) 
{
	int arr1[3][4];
	int arr2[7][9];

	printf("R3 C4: %d \n", sizeof(arr1));
	printf("R7 C9: %d \n", sizeof(arr2));

	return 0;
}