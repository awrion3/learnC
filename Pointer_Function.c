# include <stdio.h>

void ShowArr(int* para, int len)
{
	int i;
	
	for (i = 0; i < len; i++)
		printf("%d ", para[i]);
	
	printf("\n");
}

void AddArr(int* para, int len, int add)
{
	int i;

	for (i = 0; i < len; i++)
		para[i] += add;
}


int main(void)
{
	int arr1[3] = { 1, 2, 3 };
	int arr2[5] = { 4, 5, 6, 7, 8 };

	ShowArr(arr1, sizeof(arr1) / sizeof(int));
	ShowArr(arr2, sizeof(arr2) / sizeof(int));

	AddArr(arr1, sizeof(arr1) / sizeof(int), 1);
	AddArr(arr2, sizeof(arr2) / sizeof(int), 2);

	ShowArr(arr1, sizeof(arr1) / sizeof(int));
	ShowArr(arr2, sizeof(arr2) / sizeof(int));

	return 0;
}