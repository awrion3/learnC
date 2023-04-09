#pragma warning (disable:4996) //scanf()에 대한 warning 해제
#include <stdio.h>

int main(void) {

	printf("1 %% 10 = %d\n", 1 % 10);	//1 나머지는 계속 남음
	printf("1 / 10 = %d\n", 1 / 10);	//0 들어가지 않음 (double형일 시 0.1)
	printf("10 %% 10 = %d\n", 10 % 10); //0 딱맞아 떨어짐 (배수 혹은 약수)
	printf("10 / 10 = %d\n", 10 / 10);  //1 몫으로 떼어짐 (자리수 혹은 소인수분해)

	return 0; //프로그램 정상 종료
}