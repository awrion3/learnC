#pragma warning (disable:4996) //scanf() 함수 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	char c[5], i, j, s[5];	    //char형 변수 선언

	for (i = 0; i < 5; i++)	//for문으로 배열 접근
	{
		scanf("%c", &c[i]);	//각 문자 입력
		printf("%c", c[i]); //입력 문자 출력
	}
	printf("\n");			//줄바꿈 출력
	
	i = 4;
	while (i != 0) {	//4회 동안 한칸씩 shift한 결과 출력//

		for (j = 0; j < 5; j++)	//for문으로 배열 접근
		{
			s[j] = c[(j + 4) % 5]; //s[0] <= c[4], s[1] <= c[0]...
			printf("%c", s[j]);	   //shift해서 생성된 배열 출력
		}

		for (j = 0; j < 5; j++) //for문으로 배열 접근
			c[j] = s[j];		//shift한 배열 다시 저장
		printf("\n"); //줄바꿈 출력

		i--; //반복 횟수 제어//
	}

	return 0;		   //프로그램 정상 종료//
}