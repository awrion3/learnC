#pragma warning (disable:4996)	//
#include <stdio.h>				//

int main(void) {

	int N, SC1[20], SC2[20], RK[20], CUT;
	double AG[20];
	char PF[20];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &SC1[i]);

	for (int i = 0; i < N; i++)
		scanf("%d", &SC2[i]);

	//
	for (int i = 0; i < N; i++)
		AG[i] = SC1[i] * 0.4 + SC2[i] * 0.6;

	for (int i = 0; i < N; i++)
	{
		RK[i] = 1;
		for (int j = 0; j < N; j++)
			if (AG[i] < AG[j])
				RK[i]++;
	}

	//
	CUT = N * 0.7;
	for (int i = 0; i < N; i++)
		if (RK[i] <= CUT)
			PF[i] = 'P';
		else
			if (SC2[i] >= 80)
				PF[i] = 'P';
			else
				PF[i] = 'F';

	//
	for (int i = 0; i < N; i++)
		printf("%d %d %d %.1f %d %c\n", i + 1, SC1[i], SC2[i], AG[i], RK[i], PF[i]);

	return 0;
}