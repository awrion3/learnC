# include <stdio.h>

int main(void) // int: return type // main: function name // void: parameter
{
	int num1, num2; 
	num1 = printf("12345 \n");
	num2 = printf("I love my house \n");
	printf("%d %d \n", num1, num2); // printf() returns the value: string length (num1, num2)
	
	return 0; // 0: return value
}