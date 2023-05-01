#pragma warning (disable:4996) //scanf() 함수 오류 해결//
#include <stdio.h>			   //표준입출력 관련 헤더 파일//

int main(void) {       //main() 함수//

	int v[5], i, j, tmp;		//변수 선언

	for (i = 0; i < 5; i++)	    //for문으로 배열 접근
		scanf("%d", &v[i]);		//배열에 값 저장

	for (i = 0; i < 5; i++)		//for문으로 배열 접근
		for (j = 0; j < 5; j++)	 //배열의 원소끼리 비교하여
			if (v[i] > v[j] && i > j) {	//v[i]의 값이 더 크면서 뒤에 있을 시,
				tmp = v[j];		//tmp를 활용하여
				v[j] = v[i];	//v[i]를 앞으로 보내고,
				v[i] = tmp;		//v[j]를 뒤로 보내어 내림차순 정렬
			}

	printf("%d\n%d", v[0], v[1]); //최대값, 두번째 최대값 출력

	return 0;		   //프로그램 정상 종료//
}