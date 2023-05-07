#pragma warning (disable:4996) //scanf() 관련 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {			   //main() 함수//

	/*변수 선언*/
	int N, i;						//학생 수 관련 변수 선언
	int sc1, sc2, S1[20], S2[20];	//시험 점수 관련 변수 선언
	double AVG[20];					//평균 점수 관련 변수 선언
	int j, rank, RAN[20];			//등수 관련 변수 선언
	int cut;					//통과 여부 관련 int형 변수 선언
	char PAF[20];				//통과 여부 관련 char형 변수 선언

	/*학생 수 N 입력 및 학생별 점수 입력*/
	scanf("%d", &N);				//학생 수 입력

	for (i = 0; i < N; i++)			//학생 수만큼
	{
		scanf("%d", &sc1);			//1차 인증 점수 입력받아
		S1[i] = sc1;				//배열 S1에 값 저장
	}

	for (i = 0; i < N; i++)			//학생 수만큼
	{
		scanf("%d", &sc2);			//2차 인증 점수 입력받아
		S2[i] = sc2;				//배열 S2에 값 저장
	}

	/*학생별 평균 값 구하기*/
	for (i = 0; i < N; i++) 				//학생별로 평균 구해서
		AVG[i] = S1[i] * 0.4 + S2[i] * 0.6;	//배열 AVG에 값 저장
	
	/*학생별 등수 구하기*/
	for (i = 0; i < N; i++)		 //각 학생마다
	{
		rank = 1;				 //1등으로 초기화 후
		for (j = 0; j < N; j++)		//다른 학생과 비교하여
			if (AVG[i] < AVG[j])	//더 낮은 평균일 시,
				rank++;				//등수 증가시키고
		RAN[i] = rank;			 //배열 RAN에 등수 값 저장
	}

	/*학생별 통과 여부 확인하기*/
	cut = N * 0.7;	//double값을 int값으로 자동 형 변환 (소수점 이하 버림)
	for (i = 0; i < N; i++) 	 //각 학생에 대해
		if (cut >= RAN[i])		 //등수가 커트라인과 같거나 작은 경우,
			PAF[i] = 'P';			//P 부여
		else					 //등수가 커트라인을 넘은 경우,
		{
			if (S2[i] >= 80)		//2차 점수가 80점 이상일 시,
				PAF[i] = 'P';		 //P 부여
			else					//80점 미만일 시,
				PAF[i] = 'F';		 //F 부여
		}
	
	/*각 변수값 출력*/
	for (i = 0; i < N; i++) { //학생별 학번, 1차점수, 2차점수, 평균, 등수, 통과여부 출력//
		printf("%d %d %d %.1f %d %c\n", i + 1, S1[i], S2[i], AVG[i], RAN[i], PAF[i]);
	}

	return 0;				   //프로그램 정상 종료//
}
