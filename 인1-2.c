#pragma warning (disable : 4996)  //scanf()에 대한 warning 해제
#include <stdio.h>

int main(void) {

	int N, P; //변수 선언
	int ccnt = 0, scnt = 0, dcnt = 0;
	int flag = 0, f, s = 0, c = 0, d = 0; //변수 선언 및 초기화

	scanf("%d", &N); //입력갯수 입력

	while (N != 0) { //입력갯수만큼 반복
		scanf("%d", &P); //비밀번호 입력

		if (P >= 10000 && P <= 99999) //비밀번호 다섯자리
		{
			if (P / 10 % 10 == 0 && P % 10 == 0) //비밀번호의 마지막 두 숫자는 00
			{
				if (P / 10000 == P / 1000 % 10 && P / 1000 % 10 == P / 100 % 10)
				{
					printf("none\n");		//첫, 두, 세 번째 자리는 모두 같지 않음
					flag = 1; //입력오류 확인
				}
				else if (P / 10000 != P / 1000 % 10 && P / 1000 % 10 != P / 100 % 10 && P / 100 % 10 != P / 10000)
				{
					printf("none\n");		//첫, 두, 세 번째 자리는 모두 다르지 않음
					flag = 1; //입력오류 확인
				}
				else {
					switch (P / 100 % 10) { //세 번째 자리는 학과 코드
					case 0: case 1: case 2: //CE 학과
						printf("CE\n"); 
						ccnt++; //출입 학생 수 누적
						f = 0;  //오류 없이 출입한 CE과 학생 수 확인하기 위한 변수값
						break;
					case 3: case 4:			//SW 학과
						printf("SW\n"); 
						scnt++; //출입 학생 수 누적
						f = 1;  //오류 없이 출입한 SW과 학생 수 확인하기 위한 변수값
						break;
					case 5:					//DS 학과
						printf("DS\n"); 
						dcnt++; //출입 학생 수 누적
						f = 2;  //오류 없이 출입한 DS과 학생 수 확인하기 위한 변수값
						break;
					default:				//그외는 none
						printf("none\n"); 
						flag = 1; //입력오류 확인
					}
				}
			}
			else {	//형식을 지키지 않을 시 none
				printf("none\n");
				flag = 1; //입력오류 확인
			}
		}
		else {  //범위를 지키지 않을 시 none
			printf("none\n");
			flag = 1; //입력오류 확인
		}
		
		if (flag == 0) {//입력오류 없이
			if (f == 0)	//출입한 CE학과 학생 수 누적
				c++;
			if (f == 1) //출입한 SW학과 학생 수 누적
				s++;
			if (f == 2) //출입한 DS학과 학생 수 누적
				d++;
		}
		else  //입력 오류를 거쳐
			if (f == 0 || f == 1 || f == 2) //학과에 학생이 출입한 경우
				flag = 0; //다시 입력오류 초기화
		f = -1; //학과 출입 기록 초기화

		N--; //N회 비밀번호 입력
	}

	printf("%d %d %d\n", ccnt, scnt, dcnt); //각 학과에 출입한 학생 수 출력
	printf("%d %d %d\n", c, s, d); //입력 오류 없이 출입한 학생 수 출력
	
	return 0;  //프로그램 정상 종료
}