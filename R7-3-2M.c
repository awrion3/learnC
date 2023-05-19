#pragma warning (disable:4996)	//
#include <stdio.h>				//

int main(void) {

	int N, arr[100] = { 0 };
	int cnt = 1, max = 1, edx;
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
 
	edx = N - 1; //
	for (int i = 0; i < N - 1; i++)
		if (arr[i] * arr[i + 1] < 0) //
		{
			cnt++;
			if (max <= cnt)  //
			{
				max = cnt;
				edx = i + 1; //
			}
		}
		else
			cnt = 1;

	printf("%d\n", max);

	for (int i = edx - max + 1; i <= edx; i++) //
		printf(" %d", arr[i]);

	return 0;
}