#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
    int N, num;
    int arr[100], i, sum = 0, avg;
    
    scanf("%d", &N);
    
    for (i = 0; i < N; i++)
    {
        scanf("%d", &num);
        arr[i] = num;
        sum += num;
    }
    
    avg = sum / N;
    
    for (i = 0; i < N; i++)
        if (avg < arr[i])
            printf("%d ", arr[i]);
    
    return 0;
}