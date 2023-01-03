# include <stdio.h>

int main(void)
{
	int cnt; // first LocalV (in main)
	for (cnt = 0; cnt < 3; cnt++)
	{
		int num = 0; // first LocalV (in for)
		num++;
		printf("in FOR: %d repeat, LocalV num is %d. \n", cnt + 1, num);
	}

	if (cnt == 3)
	{
		int num = 7; // first LocalV (in if)
		num++;
		printf("in IF: LocalV num is %d. \n", num);
	}

	return 0;
}