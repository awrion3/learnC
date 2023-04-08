#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
    int a, b, c, M = 0;
    scanf("%d%d%d", &a, &b, &c);

    M += (a > b && b > c) * b;
    M += (a < b && b < c) * b;

    M += (b > a && a > c) * a;
    M += (b < a && a < c) * a;

    M += (a > c && c > b) * c;
    M += (a < c && c < b) * c;

    printf("%d", M);

    return 0;
}