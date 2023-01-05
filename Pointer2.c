# include <stdio.h>

int main(void)
{
	int num = 10;
	int* ptr1 = &num; //10
	int* ptr2 = ptr1; //10

	(*ptr1)++; //11
	(*ptr2)++; //12

	printf("%d \n", num);

	return 0;
}