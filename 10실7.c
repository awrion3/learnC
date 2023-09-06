#pragma warning (disable:4996)	//scanf() 오류 해제
#include <stdio.h>				//표준입출력 헤더파일

int main(void) {
	
	int num, n, v, cnt = 0, idx = 0;
	char str[40], *pstr = NULL; 
	//크기 계산: (수 표현5 +공백1 + 자리 표현3 +공백1) * 최대 4자리

	scanf("%d", &num);
	
	//자리수 세기 및 수 뒤집기
	n = num; v = 0;
	while (n != 0) {
		v *= 10;	//수 뒤집기
		v += n % 10;
		cnt++;		//자리수 세기
		n /= 10;
	}

	num = v; //뒤집은 수 대입하기
	while (num != 0) {
		v = num % 10;

		//각 숫자 + 자리수에 대응하는 문자열 구하기
		if (v == 9) {
			if (cnt == 4)
				pstr = "nine THO ";
			else if (cnt == 3)
				pstr = "nine HUN ";
			else if (cnt == 2)
				pstr = "nine TEN ";
			else
				pstr = "nine ";
		}
		else if (v == 8) {
			if (cnt == 4)
				pstr = "eight THO ";
			else if (cnt == 3)
				pstr = "eight HUN ";
			else if (cnt == 2)
				pstr = "eight TEN ";
			else
				pstr = "eight ";
		}
		else if (v == 7) {
			if (cnt == 4)
				pstr = "seven THO ";
			else if (cnt == 3)
				pstr = "seven HUN ";
			else if (cnt == 2)
				pstr = "seven TEN ";
			else
				pstr = "seven ";
		}
		else if (v == 6) {
			if (cnt == 4)
				pstr = "six THO ";
			else if (cnt == 3)
				pstr = "six HUN ";
			else if (cnt == 2)
				pstr = "six TEN ";
			else
				pstr = "six ";
		}
		else if (v == 5) {
			if (cnt == 4)
				pstr = "five THO ";
			else if (cnt == 3)
				pstr = "five HUN ";
			else if (cnt == 2)
				pstr = "five TEN ";
			else
				pstr = "five ";
		}
		else if (v == 4) {
			if (cnt == 4)
				pstr = "four THO ";
			else if (cnt == 3)
				pstr = "four HUN ";
			else if (cnt == 2)
				pstr = "four TEN ";
			else
				pstr = "four ";
		}
		else if (v == 3) {
			if (cnt == 4)
				pstr = "three THO ";
			else if (cnt == 3)
				pstr = "three HUN ";
			else if (cnt == 2)
				pstr = "three TEN ";
			else
				pstr = "three ";
		}
		else if (v == 2) {
			if (cnt == 4)
				pstr = "two THO ";
			else if (cnt == 3)
				pstr = "two HUN ";
			else if (cnt == 2)
				pstr = "two TEN ";
			else
				pstr = "two ";
		}
		else if (v == 1) {
			if (cnt == 4)
				pstr = "one THO ";
			else if (cnt == 3)
				pstr = "one HUN ";
			else if (cnt == 2)
				pstr = "one TEN ";
			else
				pstr = "one ";
		}
		else	//0은 출력 아무것도 안함
			pstr = "";

		for (int i = 0; pstr[i]; i++) //널 문자 전까지 값 베끼기
			str[idx++] = pstr[i];
		//이후 pstr는 또 다시 새로운 문자열 상수 입력받을 것이며,
		//str[idx]는 이어서 새 문자열 상수가 붙여질 것임

		cnt--; //자리수 하나씩 줄여가기
		
		num /= 10;
	}

	str[idx++] = '\0';	//마지막에 널 문자 삽입 (정수 0의 경우 얘만 출력하는 셈)

	printf("%s", str);

	return 0;
}