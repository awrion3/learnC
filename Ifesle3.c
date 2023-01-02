#include <stdio.h> 

int main(void)
{
	int num;

	for (num=1; num<100; num++)
	{                                          // cf. if(!(num%7) || !(num%9))
		if (num % 7 == 0 && num % 9 == 0)      //          printf("%d ", num);
			printf("%d is multiple of 7 and 9 \n", num);
		else if (num % 7 == 0)
			printf("%d is multiple of 7 \n", num);
		else if (num % 9 == 0)
			printf("%d is multiple of 9 \n", num);
	}

	return 0;
}