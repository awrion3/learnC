#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{
    int N, i;
    int num, j, isp;
    int flg = 1, row = 0, max = 0;
    int x, cnt = 0;
    int fg = 1, mx, mn;
    
    scanf("%d", &N); //양의 정수 N개
    
    for (i = 0; i < N; i++) { //N개의 정수 입력
        scanf("%d", &num);
        
        /*소수 판별 파트*/
        isp = 1; //num을 소수로 가정
        for (j = 2; j < num; j++)
            if (!(num % j))
                isp = 0; //num은 소수가 아님
        
        if (num >= 100 || num <= 1) //100 이상 제외, 소수는 1보다 큰 자연수
            isp = 0; //num은 소수가 아님
  
        /*소수 연속 회수 계산 파트*/
        if (isp == 1) //num이 소수일 시
        {
            row++; //연속 회수 카운트
            
            if (flg == 1) //처음만 연속 회수 카운트 최대값 초기화
            {
                max = row; //연속 회수 카운트를 최대값으로 지정
                x = num; //마지막 소수 num을 저장 
            }
            flg = 0; //이후 해당 부분 제외
            
            cnt++; //전체 소수 개수 카운트
        }
        else //num이 소수가 아닐 시
            row = 0; //연속 회수 카운트 초기화

        /*소수 연속 회수 최대값 및 마지막 소수 체크 파트*/
        if (max < row) //새 연속 회수가, 이전 연속 회수 카운트보다 클 시
        {   
            max = row; //최대값 변동
            x = num; //마지막 소수 num도 변동
         }
        
        /*전체 입력값의 최대 최소값 확인 파트*/
        if (fg == 1) //처음 입력값으로 최대 최소값 초기화
        {
            mx = num;
            mn = num;
        }
        fg = 0; //이후 해당 부분 제외
        
        if (mx < num) //새 입력값이 기존 입력값보다 클 때 최대값 변경
            mx = num;
        if (mn > num) //새 입력값이 기존 입력값보다 작을 때 최소값 변경
            mn = num;      
    
    } //for문의 끝: N개의 정수 입력
       
    printf("%d\n", max);
   
    if (max != 0) //소수가 한 번도 없던 경우에는 출력 제외
        printf("%d\n", x);  
    
    if (cnt != 0) //소수가 한 번도 없던 경우 출력 제외
        printf("%d %d", mx, mn); 
    
    return 0;
}