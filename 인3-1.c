#pragma warning (disable:4996) //scanf()로 인한 오류 해제
#include <stdio.h> 

int main(void)
{
    int N, num, flag, i, cnt = 0; //변수 선언 및 초기화

    scanf("%d", &N); //반복 회수 입력

    while (N > 0) { //N이 0이 되기 전까지 반복
        scanf("%d", &num); //양의 정수 입력

        flag = 1; //소수라 가정
        for (i = 2; i < num; i++) {//2부터 num 미만 범위의
            if (!(num % i)) //수로 나누어 떨어질 시,
                flag = 0; //소수가 아닌 것으로 판단
        }

        if (flag == 1 && num != 1) { //또한 소수는 1보다 큰 자연수
            printf("%d ", num); //소수만 출력하기
            cnt++; //누적 회수 계산
        }

        if (cnt == 3) { //만약 누적 회수가 3회가 되었다면,
            cnt = 0; //누적 회수 0으로 초기화
            printf("*"); //양식대로 출력
            printf("\n");
        }
        else //누적 회수가 3회가 아닌 (3회 미만 등) 경우면서,
            if (cnt > 0 && N == 1) { //회수가 0보다는 크고, N이 마지막일 시,
                printf("*"); //양식대로 출력
                printf("\n");
            }

        N--; //반복 제어 변수
    }

    return 0; //프로그램 정상 종료
}