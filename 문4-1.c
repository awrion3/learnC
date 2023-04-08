#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

    int N, v, M = 0, i;
    int cnt = 0, dnt = 0; //변수 선언 및 초기화

    scanf("%d", &N); //정수 N 입력

    while (N != 0) { //정수 N의 자리수를 바탕으로 역순하여 정수 M 구하기
        M *= 10; //정수 M의 자리수 맞추기

        v = N % 10; //정수 N의 한 자리수 구하고
        N /= 10; //정수 N의 자리수 떼어내기

        M += v; //구한 정수 N의 한 자리수를 M에 더하기
    }
    printf("%d\n", M); //역순으로 바꾼 정수 M 출력

    for (i = 1; i <= M; i++) { //1부터 M까지의 정수 중
        if (!(i % 2)) //2의 배수와
            cnt++;
        if (!(i % 3)) //3의 배수의 개수 구하기
            dnt++;
    }

    printf("%d %d", cnt, dnt); //2와 3의 배수 개수 출력하기

    return 0;
}