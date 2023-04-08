#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
    int N, H;
    scanf("%d", &N);
    
    H = N / 100 % 10;
    
    if (H >= 5)
    {
        N /= 1000;
        N *= 1000;
        N += 1000;
    }
    else
    {
        N /= 1000;
        N *= 1000;
    }
    
    printf("%d", N);
    
    return 0;
}