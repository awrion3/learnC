#pragma warning (disable:4996)  //scanf_s() 함수 사용 관련 컴파일 오류 해제
#include <stdio.h>              //표준입출력 관련 헤더 파일 포함

int main(void)                  //프로그램 시작 지점 main() 함수
{
    int a, b, c, r, max, min;       //세 과목 a, b, c 및 평균점수 r, 최대최소값 관련 변수 선언

    scanf("%d%d%d", &a, &b, &c);    //세 과목 a, b, c의 점수 입력

    r = (a + b + c) / 3;            //세 과목 a, b, c의 평균점수 산출
    
    if (r >= 90)                    //90점 이상 'A' 출력
        printf("A\n");
    else if (r >= 80)               //80점 이상 'B' 출력
        printf("B\n");
    else if (r >= 70)               //70점 이상 'C' 출력
        printf("C\n");
    else if (r >= 60)               //60점 이상 'D' 출력
        printf("D\n");
    else                            //그외 점수 'F' 출력
        printf("F\n");

    max = a;                        //세 점수 중 최대값 찾기: a를 최대값으로 가정
    if (b > max)                    //b가 최대값보다 큰 경우: b를 최대값으로 지정
        max = b;
    if (c > max)                    //c가 최대값보다 큰 경우: c를 최대값으로 지정
        max = c;

    min = a;                        //세 점수 중 최소값 찾기: a를 최소값으로 가정
    if (b < min)                    //b가 최소값보다 작은 경우: b를 최소값으로 지정
        min = b;
    if (c < min)                    //c가 최소값보다 작은 경우: c를 최소값으로 지정
        min = c;

    printf("max: %d\n", max);        //세 점수 중 최대값 출력
    printf("min: %d\n", min);        //세 점수 중 최소값 출력

    return 0;                   //프로그램 정상 종료
}
