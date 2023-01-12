# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main(void)
{
    char *str = "Simple String";

    puts(str);
    puts("Simple String");

    fputs(str, stdout); printf("\n");
    fputs("Simple String", stdout); printf("\n");

    return 0;
}