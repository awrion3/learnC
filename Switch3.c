# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int num;
	printf("num>0 : ");
	scanf("%d", &num);

	switch (num/10)
	{
	case 0:	  
		printf("0 <= num < 10: \n");
		break;
	case 1:
		printf("10 <= num < 20 \n");
		break;
	case 2:
		printf("20 <= num < 30 \n");
		break;
	default:  
		printf("30 <= num \n");
	}

	return 0;
}