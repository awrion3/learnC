#pragma warning (disable:4996) //scanf() 함수 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	char A[3], i, tmp, j, G[3] = {'_', '_', '_'}, q;
	//char형 변수 선언 및 초기화
	
	for (i = 0; i < 3; i++)	//for문으로 배열 A 접근
		scanf("%c", &A[i]);	//정답 단어 입력
	getchar();				//enter키 입력 버퍼에서 제거
	
	for (i = 0; i < 5; i++) {   //5회 도전 기회//

		scanf("%c%c", &q, &tmp);    //enter키 입력 버퍼에서 제거

		if (q == A[0])			//첫째 문자 정답시 변경
			G[0] = A[0];
		if (q == A[1])			//둘째 문자 정답시 변경
			G[1] = A[1];
		if (q == A[2])			//셋째 문자 정답시 변경
			G[2] = A[2];

		for (j = 0; j < 3; j++)		//변경된 배열 G 출력하기
			printf("%2c", G[j]);

		if (G[0] == A[0] && G[1] == A[1] && G[2] == A[2])
			break; //5회 전에 정답을 맞춘 경우 반복 종료//
		else
			printf("\n"); //줄바꿈 출력
	}

	return 0;		   //프로그램 정상 종료//
}