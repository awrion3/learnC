#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

    int N, sum = 0;
    scanf("%d", &N);

    while (1) {
        
        while (N != 0) {
            sum += N % 10;
            N /= 10;
        }

        if (sum >= 10) { 
            N = sum; //일종의 재귀 구현.
            sum = 0; //
        }
        else
            break;
    }

    printf("%d", sum);

    return 0;
}
