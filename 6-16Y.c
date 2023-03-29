#pragma warning (disable:4996) 
#include <stdio.h> 

int main(void) {

	int n, i, pri, cnt = 0;

	for (n = 2; n <= 50; n++)
	{
		pri = 1;
		for (i = 2; i < n; i++)
		{
			if (!(n % i))
				pri = 0;
		}  
		if (pri == 1)
		{
			printf(" %d", n);
			cnt += 1;
			if (!(cnt % 5))
				printf("\n");
		}
	}
	return 0;
}
/*
int n, i;

for (n = 2; n <= 50; n++) {  //만약 특정 범위 숫자 내에서 소수 판별이라면 삽입.//
 i = 2;
 while (i < n && n % i != 0) //나누어 떨어지는 경우 한번이라도 발생시 중지.
  	 i++;

 if (i == n)				 //그 상태에서 그 나누어 떨어지는 수가 자기자신인 경우만 소수 출력.
	 printf(" %d", n);
}
*/