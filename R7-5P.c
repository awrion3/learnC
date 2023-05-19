#pragma warning (disable:4996)	//
#include <stdio.h>				//

int main(void) {

	int N[100], num, idx = 0, sum = 0, fl;

	scanf("%d", &N[idx++]);

	for (int k = 0; k < 100; k++) { //
		scanf("%d", &num);
	
		fl = 1;
		for (int i = 0; i < idx; i++)
			if (N[i] == num)
				fl = 0;
			
		if (fl == 1)
			N[idx++] = num;
		else
			break; //
	}

	for (int i = 0; i < idx; i++)
		sum += N[i];

	printf("%d", sum);

	return 0;
}