#pragma warning (disable:4996) //scanf()에 대한 warning 해제
#include <stdio.h>

int main(void) {
	
	int N, f, g, cnt = 1, m = 1, max = 0; //변수 선언 및 초기화
	
	scanf("%d", &N); //정수 입력

	if (N > 0)
		g = 1; //양수인 경우 g에 1 저장
	else 
		g = 0; //음수인 경우 g에 0 저장

	while (N != 0) { //0이 입력되기 전까지 반복

		scanf("%d", &N); //정수 입력

		if (N > 0) {
			f = 1; //양수인 경우 f에 1 저장
		}
		else if (N < 0) {
			f = 0; //음수인 경우 f에 0 저장
		}
		else
			break; //0인 경우 반복 중지

		if (f == g) { //만약 두 입력 값의 부호가 같으면 
			cnt++;	  //회수 누적

			if (m == 1) //처음 초기화
				max = cnt; //누적값을 max에 저장
			m = 0; //이후 해당 부분 무시

			if (max < cnt) //만약 최대 회수가 이전보다 크면
				max = cnt; //회수 최대값 갱신
		}
		else
			cnt = 1; //부호 같지 않을 시 누적 회수 다시 초기화

		g = f; //추후 비교를 위해 입력값의 부호를 저장
	}
	printf("%d", max); //연속으로 같은 부호가 등장한 최대 회수 출력

	return 0; //프로그램 정상 종료
}