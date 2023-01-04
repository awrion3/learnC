# include <stdio.h>

int main(void)
{
	char str[] = "Good Morning!";
	printf("size of str: %d \n", sizeof(str)); // null included
	printf("print null: %c \n", str[13]);
	printf("print null: %d \n", str[13]);

	str[12] = '?';
	printf("print string: %s \n", str);

	char nu = '\0';
	char sp = ' ';
	printf("%d %d", nu, sp);

	return 0;
}