#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

    int N, i, j;
    scanf("%d", &N);

    for (i = 1; i <= N; i++) //1 ...5
    {
        for (j = N; j > i; j--) //5 4 3 2
            printf(" ");

        for (j = 1; j < i * 2; j++) //1 < 2
            printf("*");

        printf("\n");
    }
    return 0;
}