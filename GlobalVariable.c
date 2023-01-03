# include <stdio.h>

void Add(int val);
int num; // GlobalV initializes in 0

int main(void)
{
	printf("num: %d \n", num);
	
	Add(3);
	printf("num: %d \n", num);
	
	num++; // from GlobalV
	printf("num: %d \n", num);
	
	return 0;
}

void Add(int val)
{
	num += val; // from GlobalV
}