# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
	int num = 0, cnt = 0;
	printf("number: ");
	scanf("%d", &num);

	while(cnt++<num)              // while(cnt<num)
	{                             // {  
		printf("%d \n", 3*cnt);   //      cnt++;
	}                             //      printf("%d ", 3*cnt);
	return 0;                     // } 
}