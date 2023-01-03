# include <stdio.h>

void Recursive(int num) //
{
	if (num <= 0) // end condition
		return 0; // end recursive
	printf("Recursive call: %d \n", num);
	Recursive(num - 1); //
}

int main(void)
{
	Recursive(3);
	return 0;
}