#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
    int N, H;
    scanf("%d", &N);
    
    H = N / 100 % 10;
    
    N = H >= 5 ? (N / 1000)*1000+1000 : (N / 1000)*1000;
    
    printf("%d", N);
    
    return 0;
}