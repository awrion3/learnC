#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N;
	scanf("%d", N);

	if (N % 4 == 0) //4로 나누어 떨어지면서,
	{
		if (N % 400 == 0)      //400으로 나누어 떨어지면,
			printf("L");
		else if (N % 100 == 0) //아닌 것 중 100으로 나누어 떨어지면,
			printf("C");
		else				   //그도 아닌 것은,
			printf("L");
	}	
	else             //4로 나누어 떨어지지도 않으면,
		printf("C");

	return 0;
}