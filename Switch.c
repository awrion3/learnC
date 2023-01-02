# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int num;
	printf("1 ~ 3 number: ");
	scanf("%d", &num);

	switch (num)
	{
	case 1:	  // label: if num == 1
		printf("1 = One \n");
		break;
	case 2:
		printf("2 = Two \n");
		break;
	case 3:
		printf("3 = Three \n");
		break;
	default:   // similar to else
		printf("Not Yet \n");
	}

	return 0;
}