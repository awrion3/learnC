#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {

	int i, odd = 0, even = 0;

	for (i = 1; i <= 10; i++) {
		if (!(i % 2))
			even += i;
		else
			odd += i;
	}
	printf("%d\n%d", odd, even);

	return 0;
}