#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {

	int n, min;

	scanf("%d", &n);
	min = n;

	while (n != 0) {
		scanf("%d", &n);
		if (n != 0 && n < min) //(n != 0) 조건이 다소 겹치므로, 사용을 피하려면 
			min = n;			//if 블록을 위로 올리고, scanf 블록을 아래로 내린다.
	}
	printf("%d", min);

	return 0;
}