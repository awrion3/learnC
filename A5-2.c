#pragma warning (disable:4996)  //scanf_s() 함수 사용 관련 컴파일 오류 해제
#include <stdio.h>              //표준입출력 관련 헤더 파일 포함

int main(void)                  //프로그램 시작 지점 main() 함수
{
	int a, b, c, sum = 0;			//세 메뉴와 총금액 관련 변수 선언 및 초기화

	scanf("%d%d%d", &a, &b, &c);	//세 메뉴 입력을 위한 scanf()

	//메뉴 a
	if (a == 1)						//메뉴 a로 1 입력 시,
	{
		printf("Pizza\n");			//Pizza 출력 및 총금액에 15000원 추가
		sum += 15000;
	}
	else if (a == 2)				//메뉴 a로 2 입력 시,
	{
		printf("Burger\n");			//Burger 출력 및 총금액에 5000원 추가
		sum += 5000;						
	}
	else if (a == 3)				//메뉴 a로 3 입력 시,
	{
		printf("Salad\n");			//Salad 출력 및 총금액에 4500원 추가
		sum += 4500;							
	}
	else if (a == 4)				//메뉴 a로 4 입력 시,
	{		
		printf("Ice cream\n");		//Ice cream 출력 및 총금액에 800원 추가
		sum += 800;					
	}
	else if (a == 5) 				//메뉴 a로 5 입력 시,
	{	
		printf("Beverage\n");		//Beverage 출력 및 총금액에 500원 추가
		sum += 500;							
	}
	else							//메뉴 a로 그외 입력 시,
		printf("None\n");			//None 출력
	
	//메뉴 b
	if (b == 1)						//메뉴 b로 1 입력 시,
	{
		printf("Pizza\n");			//Pizza 출력 및 총금액에 15000원 추가
		sum += 15000;
	}
	else if (b == 2)				//메뉴 b로 2 입력 시,
	{
		printf("Burger\n");			//Burger 출력 및 총금액에 5000원 추가
		sum += 5000;
	}
	else if (b == 3)				//메뉴 b로 3 입력 시,
	{
		printf("Salad\n");			//Salad 출력 및 총금액에 4500원 추가
		sum += 4500;
	}
	else if (b == 4)				//메뉴 b로 4 입력 시,
	{
		printf("Ice cream\n");		//Ice cream 출력 및 총금액에 800원 추가
		sum += 800;
	}
	else if (b == 5) 				//메뉴 b로 5 입력 시,
	{
		printf("Beverage\n");		//Beverage 출력 및 총금액에 500원 추가
		sum += 500;
	}
	else							//메뉴 b로 그외 입력 시,
		printf("None\n");			//None 출력

	//메뉴 c
	if (c == 1)						//메뉴 c로 1 입력 시,
	{
		printf("Pizza\n");			//Pizza 출력 및 총금액에 15000원 추가
		sum += 15000;
	}
	else if (c == 2)				//메뉴 c로 2 입력 시,
	{
		printf("Burger\n");			//Burger 출력 및 총금액에 5000원 추가
		sum += 5000;
	}
	else if (c == 3)				//메뉴 c로 3 입력 시,
	{
		printf("Salad\n");			//Salad 출력 및 총금액에 4500원 추가
		sum += 4500;
	}
	else if (c == 4)				//메뉴 c로 4 입력 시,
	{
		printf("Ice cream\n");		//Ice cream 출력 및 총금액에 800원 추가
		sum += 800;
	}
	else if (c == 5) 				//메뉴 c로 5 입력 시,
	{
		printf("Beverage\n");		//Beverage 출력 및 총금액에 500원 추가
		sum += 500;
	}
	else							//메뉴 c로 그외 입력 시,
		printf("None\n");			//None 출력

	printf("Total:%dwon", sum);		//세 번 입력한 메뉴를 바탕으로 총금액 출력

	return 0;						//프로그램 정상 종료
}