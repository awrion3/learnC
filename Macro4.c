#include <stdio.h>

#define STRING_JOB(A, B) #A " is a " #B"."

int main(void)
{
	printf("%s \n", STRING_JOB(Lee, Teacher));
	return 0;
}