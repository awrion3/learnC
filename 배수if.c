#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (!(n % 2) && !(n % 3) && !(n % 5))
        printf("%d is multiple of 2, 3, 5", n);
    else if (!(n % 2) && !(n % 3))
        printf("%d is multiple of 2, 3", n);
    else if (!(n % 2) && !(n % 5))
        printf("%d is multiple of 2, 5", n);
    else if (!(n % 3) && !(n % 5))
        printf("%d is multiple of 3, 5", n);
    else if (!(n % 2))
        printf("%d is multiple of 2", n);
    else if (!(n % 3))
        printf("%d is multiple of 3", n);
    else if (!(n % 5))   
        printf("%d is multiple of 5", n);
    else 
        printf("%d is not multiple of 2, 3, 5", n);
     
    return 0;
}    