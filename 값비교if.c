#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
    int a, b, c, M;
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
        if (b > c)
            M = b;
        else //b < c
        {
            if (a > c)
                M = c;
            else //a < c
                M = a;
        }
    else //a < b
        if (b < c)
            M = b;
        else //b > c
        {
            if (a > c)
                M = a;
            else //a < c
                M = c;
        }

    printf("%d", M);

    return 0;
}