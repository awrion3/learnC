#include <stdio.h>

int main(void)
{
	//string
	printf("%s, %s, %s \n", "ABC", "DEF", "GHI");
	
	//field width
	printf("%-5s %7s %6s \n", "NAME", "MAJOR", "GRADE"); //NAME- --MAJOR -GRADE
	
	return 0;
}