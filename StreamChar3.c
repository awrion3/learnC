# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int ConvCase(int ch)
{
    int diff = 'a' - 'A';
    if (ch>= 'A' && ch<= 'Z')
        return ch+diff;
    else if (ch>= 'a' && ch<= 'z')
        return ch-diff;
    else
        return -1;
}

int main(void)
{
    int ch;
    printf("input char: ");
    ch= getchar();
    ch= ConvCase(ch);
    if(ch==-1)
    {
        puts("out of range");
        return -1;
    }
    putchar(ch);
    
    return 0;
}