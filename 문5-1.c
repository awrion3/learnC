#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
    int N, M, i, num;
    int j, flag, cnt = 0; //변수 선언 및 초기화

    scanf("%d%d", &N, &M); //N과 M을 입력

    for (i = 0; i < N; i++) //N개의 정수 입력
    {
        scanf("%d", &num); //정수 입력

        flag = 1; //num을 소수로 가정
        for (j = 2; j < num; j++) //소수 판별
            if (!(num % j))
                flag = 0; //나누어 떨어지는 경우 소수 아님

        if (num <= 1) //소수는 1보다 큰 자연수
            flag = 0;

        if (flag == 1) //소수인 num의 개수 계산
            cnt++;

        if (flag == 1 && cnt <= M && cnt > 0) //소수를 M개 만큼 출력
            printf(" %d", num);
    }

    if (cnt == 0) //소수가 하나도 없으면 0 출력
        printf("%d", cnt);
        
    return 0;
}
