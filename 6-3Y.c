#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {

	int n = 0, sum = 0;

	while (sum < 100) {
		n++;
		sum += n;
	}
	printf("%d", n);

	return 0;
}