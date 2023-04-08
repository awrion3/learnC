#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	char ch;
	int A = 0, a = 0, num = 0, ex = 0;	//변수 선언 및 초기화

	scanf("%c", &ch); //첫 문자 입력

	while (ch != '*') { //'*'가 입력될 때까지 계속 입력
		if (ch >= 'A' && ch <= 'Z')
			A++;		//대문자의 개수 합
		else if (ch >= 'a' && ch <= 'z')
			a++;		//소문자의 개수 합
		else if (ch >= '0' && ch <= '9')	//숫자 문자인 경우,
		{
			if (ch == '0')			//각
				num += 0;
			else if (ch == '1')		//문
				num += 1;
			else if (ch == '2')		//자
				num += 2;
			else if (ch == '3')		//별
				num += 3;
			else if (ch == '4')		//숫
				num += 4;
			else if (ch == '5')		//자
				num += 5;
			else if (ch == '6')		//의
				num += 6;
			else if (ch == '7')		//누
				num += 7;
			else if (ch == '8')		//적
				num += 8;
			else if (ch == '9')		//합
				num += 9;
		}
		else
			ex++;		//그 이외 문자들의 개수 합
		scanf("%c", &ch);
	}

	printf("%d %d %d %d", A, a, num, ex);	//구한 값 차례로 출력

	return 0;
}