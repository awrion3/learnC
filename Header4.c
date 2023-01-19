#include <stdio.h>

#include "Header1.h"
#include "Header2.h"

int main(void)
{
	Div val = IntDiv(5, 2);
	
	printf("quoti: %d \n", val.quoti);
	printf("remain: %d \n", val.remain);

	return 0;
}