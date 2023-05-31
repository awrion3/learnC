#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int N, num, TN, TH, H, T, O;

	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);

		TN = num / 10000; 
		TH = num / 1000 % 10; 
		H = num / 100 % 10;
		T = num / 10 % 10; 
		O = num % 10;

		if (!(num >= 10000 && num <= 99999))
			printf("none\n");
		else if (!(T == 0 && O == 0))
			printf("none\n");
		else if (TN == TH && TH == H || TN != TH && TH != H && TN != H)
			printf("none\n");
		else {
			if (H == 0 || H == 1 || H == 2)
				printf("CE\n");
			else if (H == 3 || H == 4)
				printf("SW\n");
			else if (H == 5)
				printf("DS\n");
			else
				printf("none\n");
		}
	}

	return 0;
}
//11
//11300 20000 310100 10100 21200 11600 11510 10200 33400 75500 1100