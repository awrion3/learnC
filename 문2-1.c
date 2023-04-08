#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {
    
    char N, min, max; //char형 및 
    int flg;          //int형 변수 선언

    scanf("%c", &N); //입력 받은 문자가
    
    if (N >= 'A' && N <= 'Z') { //대문자인 경우,
        min = N;    //가장 빠른 문자 초기화
        flg = 0;    //대문자 입력임을 확인
    }
    if (N >= 'a' && N <= 'z') { //소문자인 경우,
        max = N;    //가장 나중 문자 초기화
        flg = 1;    //소문자 입력임을 확인
    }

    while (N != '0') { //'0'이 입력되면 while 문 종료

        if (N >= 'A' && N <= 'Z') //대문자인 경우,
        {
            if (min > N) //새로운 문자가 더 빠른 문자일 경우 min 변경
                min = N;
        }
        if (N >= 'a' && N <= 'z') //소문자인 경우,
        {
            if (max < N) //새로운 문자가 더 나중 문자일 경우 max 변경
                max = N;
        }
        scanf("%c", &N); //while 문 안에서 문자 반복해서 입력
    } 

    if (flg == 0)   //처음 입력한 문자가 대문자인 경우,
        printf("%c", min);   //가장 빠른 대문자 출력
    if (flg == 1)   //처음 입력한 문자가 소문자인 경우,
        printf("%c", max);   //가장 나중 소문자 출력

    return 0;
}