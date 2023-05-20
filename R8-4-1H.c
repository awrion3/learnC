#pragma warning(disable:4996)
#include <stdio.h>

//0 선언
int is_prime_number(int);

int main(void) {

	int N, M, num, cnt = 0;

	//1 입력
	scanf("%d%d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);

		if (is_prime_number(num) && cnt < M) //2 호출
		{
			printf(" %d", num);
			cnt++;
		}
	}
	//4 양식
	if (cnt == 0)
		printf("%d", cnt);

	return 0;
}

//3 정의
int is_prime_number(int num) {

	int fl = 1;

	for (int i = 2; i < num; i++)
		if (num % i == 0)
			fl = 0;

	if (num < 2)
		fl = 0;

	return fl;
}

//10 5
//1 2 3 4 5 6 7 8 9 10

//10 5
//32 33 34 35 36 42 4 45 46 54