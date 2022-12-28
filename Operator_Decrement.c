#include <stdio.h> 
int main(void)
{  //Decrement --
	int num1 = 10;
	int num2 = (num1--) + 2; // Decrement and Postfix // () has no effect in order

	printf("num1: %d \n", num1); // '10-1' (second decrease)
	printf("num2: %d \n", num2); // '10'+2 (frist calculation)

	return 0;
}
