#pragma warning (disable:4996) //scanf() 오류 해제
#include <stdio.h>			   //표준입출력 관련 헤더 파일

int main(void) {			   /*main() 함수*/

	int i, mlg = 1;		    //int형 변수 선언
	double X[10], min;		//double형 변수 선언

	for (i = 0; i < 10; i++)    //for문을 통한 배열 접근
	{
		scanf("%lf", &X[i]);	//배열의 원소 값 저장
		
		if (mlg == 1)           //최소값 초기화
		{
			min = X[i];		
			mlg = 0;			//초기화 이후 안함
		}

		if (min > X[i])		//조건 만족 시,
			min = X[i];		//최소값 변동
	}

	printf("%.1f", min);	//배열에 저장된 실수 중 최소값 출력

	return 0;					/*프로그램 정상 종료*/
}