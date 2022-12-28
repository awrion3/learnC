#include <stdio.h> 
int main(void)
{  //Increment ++
	int num3 = 5, num4 = 5;

	printf("num3: %d\n", num3++); // Postfix: 5 is displayed,
	printf("num3: %d\n", num3);   // Then, num3 is increased to 6.

	printf("num4: %d\n", ++num4); // Prefix: num4 is increased to 6,
	printf("num4: %d\n", num4);   // Then, it is displayed.

	return 0;
}
