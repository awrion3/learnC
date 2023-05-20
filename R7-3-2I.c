#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int N, sc1[20], sc2[20], tmp, rak[20], A, B;
	double avg[20], dmp;
	char abf[20];

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d", &sc1[i]);

	for (int i = 0; i < N; i++)
		scanf("%d", &sc2[i]);
	
	//
	for (int i = 0; i < N; i++)
		avg[i] = sc1[i] * 0.4 + sc2[i] * 0.6;

	for (int i = 0; i < N - 1; i++)
		for (int j = i + 1; j < N; j++)
			if (avg[i] < avg[j]) {
				dmp = avg[i];
				avg[i] = avg[j];
				avg[j] = dmp;

				tmp = sc1[i];
				sc1[i] = sc1[j];
				sc1[j] = tmp;

				tmp = sc2[i];
				sc2[i] = sc2[j];
				sc2[j] = tmp;
			}

	//
	for (int i = 0; i < N; i++) {
		rak[i] = 1;
		for (int j = 0; j < N; j++)
			if (avg[i] < avg[j])
				++rak[i];
	}
	
	A = N * 0.3;
	B = N * 0.7;

	for (int i = 0; i < N; i++)
		if (rak[i] <= A)
			abf[i] = 'A';
		else if (rak[i] <= B)
			abf[i] = 'B';
		else {
			if (sc2[i] >= 60)
				abf[i] = 'B';
			else
				abf[i] = 'F';
		}

	//
	for (int i = 0; i < N; i++)
		printf("%d %d %.1f %d %c\n",
			sc1[i], sc2[i], avg[i], rak[i], abf[i]);

	return 0;
}
//7
//32 30 92 70 70 68 12
//80 35 90 60 60 50 90