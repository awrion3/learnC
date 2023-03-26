#pragma warning (disable:4996)  //scanf_s() 함수 사용 관련 컴파일 오류 해제
#include <stdio.h>              //표준입출력 관련 헤더 파일 포함

int main(void) {                //프로그램 시작 지점 main() 함수

	int a;						//int형 변수 선언
	scanf("%d", &a);			//scanf()를 통한 10진 정수 입력

	if (10 <= a && a < 20)				// 10 이상 20 미만의 정수의 영문 번역 //
	{
		switch (a)						// 위 범위 내의 각 정수에 대하여
		{
		case 10: printf("ten"); break;			// 10 번역 및 출력
		case 11: printf("eleven"); break;		// 11 번역 및 출력
		case 12: printf("twelve"); break;		// 12 번역 및 출력
		case 13: printf("thirteen"); break;		// 13 번역 및 출력
		case 14: printf("fourteen"); break;		// 14 번역 및 출력
		case 15: printf("fifteen"); break;		// 15 번역 및 출력
		case 16: printf("sixteen"); break;		// 16 번역 및 출력
		case 17: printf("seventeen"); break;	// 17 번역 및 출력
		case 18: printf("eighteen"); break;		// 18 번역 및 출력
		case 19: printf("nineteen");			// 19 번역 및 출력
		}	
	}
	else if (20 <= a && a <= 99)		// 20 이상 99 이하의 정수의 영문 번역 //
	{
		
		switch (a / 10 % 10)			/*십의 자리수*/
		{
		case 2:							//십의 자리수가 2인 경우 번역 및 출력
			printf("twenty"); break;
		case 3:							//십의 자리수가 3인 경우 번역 및 출력
			printf("thirty"); break;
		case 4:							//십의 자리수가 4인 경우 번역 및 출력
			printf("forty"); break;
		case 5:							//십의 자리수가 5인 경우 번역 및 출력
			printf("fifty"); break;
		case 6:							//십의 자리수가 6인 경우 번역 및 출력
			printf("sixty"); break;
		case 7:							//십의 자리수가 7인 경우 번역 및 출력
			printf("seventy"); break;
		case 8:							//십의 자리수가 8인 경우 번역 및 출력
			printf("eighty"); break;
		case 9:							//십의 자리수가 9인 경우 번역 및 출력
			printf("ninety");
		}
		
		switch (a % 10)					/*일의 자리수*/
		{
		case 1:							//일의 자리수가 1인 경우 번역 및 출력
			printf("-one"); break;
		case 2:							//일의 자리수가 2인 경우 번역 및 출력
			printf("-two"); break;
		case 3:							//일의 자리수가 3인 경우 번역 및 출력
			printf("-three"); break;
		case 4:							//일의 자리수가 4인 경우 번역 및 출력
			printf("-four"); break;
		case 5:							//일의 자리수가 5인 경우 번역 및 출력
			printf("-five"); break;
		case 6:							//일의 자리수가 6인 경우 번역 및 출력
			printf("-six"); break;
		case 7:							//일의 자리수가 7인 경우 번역 및 출력
			printf("-seven"); break;
		case 8:							//일의 자리수가 8인 경우 번역 및 출력
			printf("-eight"); break;
		case 9:							//일의 자리수가 9인 경우 번역 및 출력
			printf("-nine");
		}
	}
	else								// 그외 정수의 영문 번역 //
		printf("none");					// none으로 번역 및 출력

	return 0;						//프로그램 정상 종료
}