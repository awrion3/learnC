#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
    int N, i, cnt = 0;
    char arr[100];
    
    scanf("%d", &N);
    getchar(); //
    
    for (i = 0; i < N; i++)
        scanf("%c", &arr[i]);
    
    for (i = 1; i < N - 1; i++) //
        if (arr[i - 1] == 'c' && arr[i] == 'a' && arr[i + 1] == 't')
            cnt++;
    
    printf("%d", cnt);
    
    return 0;
}