#pragma warning (disable:4996) //scanf() 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) { //main()함수//

	/*배열 M 관련 변수 선언 및 초기화*/
	int N, i, M[20];

	//정수 N 입력//
	scanf("%d", &N);

	for (i = 0; i < N; i++) //N개의 정수를 입력받아
		scanf("%d", &M[i]); //배열 M에 저장

	for (i = 0; i < N; i++) //배열 M에 대하여
		printf(" %d", M[N - i - 1]); //거꾸로 출력하기

	printf("\n"); //줄바꿈 출력

	for (i = 0; i < N; i++) //for문으로 배열 M을 접근하여
	{
		printf(" %d", M[i]);  //각 원소를 출력하기
		if ((i + 1) % 3 == 0) //만약 출력된 원소의 개수가 3의 배수일 시,
			printf("\n");     //줄바꿈 출력하여 3개씩 출력할 수 있게 하기
	}

	return 0; //프로그램 정상 종료//
}