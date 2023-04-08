#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
    double l, r;
    scanf("%lf", &l); //data type: double
    
    r = l / (2 * 3.14);
    printf("%.f", r*r*3.14);
    
    return 0;
}