# include <stdio.h>

int Add(int val);
int num = 1; // GlobalV

int main(void)
{
	int num = 5; // LocalV
	printf("num: %d \n", Add(3));  // 9 +3
	printf("num: %d \n", num + 9);  // 5 +9
	return 0;
}

int Add(int val)
{
	int num = 9; // LocalV
	num += val;
	return num;
}