# include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1; //10
	int* ptr2 = &num2; //20
	
	int* temp;
	
	(*ptr1) += 10; //20
	(*ptr2) -= 10; //10

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("%d %d \n", *ptr1, *ptr2);

	return 0;
}