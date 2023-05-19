#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	char X[100], ch, Y[100];
	int idx = 0, cnt, Z[100], kdx = 0, fl, ldx = 0;

	scanf("%c", &ch);

	while (ch != '!') {

		X[idx++] = ch;

		scanf("%c", &ch);
	}

	for (int i = 0; i < idx; i++)
	{
		cnt = 0;
		for (int j = 0; j < idx; j++)
			if (X[i] == X[j])
				cnt++;

		fl = 1;
		for (int j = 0; j < i; j++)
			if (X[i] == X[j])
				fl = 0;

		//
		if (fl == 1)
		{
			Y[ldx++] = X[i]; 
			Z[kdx++] = cnt;

		}
	}

	for (int i = ldx - 1; i >= 0; i--)
		printf("%c %d\n", Y[i], Z[i]);

	return 0;
}
//ccccaaaattttbbbbccccaaaattttdddd!