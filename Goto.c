# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int num;
	printf("number: ");
	scanf("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

//labels
ONE: 
	printf("number: 1 \n");
	goto END;
TWO: 
	printf("number: 2 \n");
	goto END;
OTHER:
	printf("Other numbers \n");

END:
	return 0;
}