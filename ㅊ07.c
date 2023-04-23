#pragma warning (disable : 4996) //scanf() 입력 함수에 대한 오류 해제
#include <stdio.h>               //입출력 등과 관련된 헤더 파일의 포함

int main(void) { //main() 함수는 단 하나: 반환형은 int(여기선 0), 매개변수는 void(없음)//

	/*변수의 선언 및 초기화*/
	char ch, flg = 0;
	int N, tmp, cnt = 0, dnt = 0;
	int cax = 0, dax = 0;

	/*변수의 값 입력*/
	scanf("%d%d", &N, &tmp); /*tmp를 통한 %c로의 입력 범람 방지*/
	
	scanf("%c", &ch); //
	N--; //

	if (ch >= 'a' && ch <= 'z') {
		cnt++;

		cax = cnt;

		flg = 2; ///
	}
	if (ch >= '0' && ch <= '9') {
		dnt++;

		dax = dnt;

		flg = 1; ///
	}
	
	/*변수의 값 계산*/
	while (N > 0) { //
		scanf("%c", &ch);

		if (ch >= 'a' && ch <= 'z') {
			if (flg == 2) { ///
				cnt++;

				if (cax < cnt)
					cax = cnt;
			}
			else {
				cnt = 1;

				cax = cax;
			}
			
			flg = 2; ///
		}
		if (ch >= '0' && ch <= '9') {
			if (flg == 1) { ///
				dnt++;

				if (dax < dnt)
					dax = dnt;
			}
			else {
				dnt = 1;

				dax = dax;
			}
		
			flg = 1; ///
		}

		N--; //
	}
	
	/*변수의 값 출력*/
	printf("%d\n%d\n", cax, dax);

	return 0; //main() 함수의 끝: 프로그램의 정상 종료//
}