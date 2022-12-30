// sizeof = operator not function

# include <stdio.h>

int main(void)
{
	char cnum = 9;        
	int inum = 1052;     
	double dnum = 3.1415; 
	printf("size of ch: %d \n", sizeof(cnum));
	printf("size of int: %d \n", sizeof(inum));
	printf("size of double: %d \n \n", sizeof(dnum));

	// integer type:
	printf("size of char: %d \n", sizeof(char));
	printf("size of short: %d \n", sizeof(short));
	printf("size of int: %d \n", sizeof(int));
	printf("size of long: %d \n", sizeof(long));
	printf("size of long long: %d \n", sizeof(long long));

	// floating-point type:
	printf("size of float: %d \n", sizeof(float));
	printf("size of double: %d \n", sizeof(double));	
	printf("size of long double: %d \n", sizeof(long double));

	return 0;
}