#pragma warning (disable : 4996) //scanf()에 대한 warning 해제
#include <stdio.h>

int main(void) { 

	int N, P; //변수 선언

	scanf("%d", &N); //입력갯수 입력

	while (N != 0) { //입력갯수만큼 반복
		scanf("%d", &P); //비밀번호 입력

		if (P >= 10000 && P <= 99999) //비밀번호 다섯자리
		{
			if (P / 10 % 10 == 0 && P % 10 == 0) //비밀번호의 마지막 두 숫자는 00
			{
				if (P / 10000 == P / 1000 % 10 && P / 1000 % 10 == P / 100 % 10) 
					printf("none\n");		//첫, 두, 세 번째 자리는 모두 같지 않음
				else if (P / 10000 != P / 1000 % 10 && P / 1000 % 10 != P / 100 % 10 && P / 100 % 10 != P / 10000)
					printf("none\n");		//첫, 두, 세 번째 자리는 모두 다르지 않음
				else {
					switch (P / 100 % 10) { //세 번째 자리는 학과 코드
					case 0: case 1: case 2:
						printf("CE\n"); //CE 학과
						break; //아래 무시
					case 3: case 4:
						printf("SW\n"); //SW 학과
						break; //아래 무시
					case 5:
						printf("DS\n"); //DS 학과
						break; //아래 무시
					default: 
						printf("none\n"); //그외는 none
					}
				}
			}
			else //형식을 지키지 않을 시 none
				printf("none\n");
		}
		else //범위를 지키지 않을 시 none
			printf("none\n");

		N--; //N회 비밀번호 입력
	}

	return 0;  //프로그램 정상 종료
}