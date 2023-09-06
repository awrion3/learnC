#pragma warning(disable:4996)
#include <stdio.h>

//
double factorial(int);

int main(void) {

	int num;
	double res = 1;		//

	scanf("%d", &num);

	while (num >= 1)	//
		res += (1 / factorial(num--));

	printf("%f", res);

	return 0;
}

//
double factorial(int num) {

	double mul;	//
	
	if (num == 1)
		mul = 1;
	else if (num > 1)
		mul = num * factorial(num - 1); //

	return mul;
}