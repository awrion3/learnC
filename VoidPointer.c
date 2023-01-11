#include <stdio.h>

void SimpleV(void)
{
	printf("Simple"); //
}

int main(void)
{
	int num = 20;
	void* ptr;

	ptr = &num;
	printf("%p \n", ptr);

	ptr = SimpleV;
	printf("%p \n", ptr);

	return 0;
}