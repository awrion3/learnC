#pragma warning (disable:4996)	//
#include <stdio.h>				//

int main(void) {

	char x[100], y[100], ch, xdx = 0, ydx = 0, xfir = 0;
	
	//
	scanf("%c", &ch);

	while (ch != '*') {
		x[xdx++] = ch;
		scanf("%c", &ch);
	}

	//
	scanf("%c", &ch);

	while (ch != '*') {
		y[ydx++] = ch;
		scanf("%c", &ch);
	}

	///
	for (int i = 0; i < xdx && i < ydx; i++) //
		if (x[i] < y[i])
		{
			xfir = 1;
			break;
		}
		else if (x[i] > y[i])
		{
			xfir = 0;
			break;
		}
		else //
			xfir = -1;
	
	if (xfir == -1)
		if (xdx < ydx)
			xfir = 1;
		else if (xdx > ydx)
			xfir = 0;
		else //
			xfir = 1;

	///
	if (xfir == 1)
		for (int i = 0; i < xdx; i++)
			printf("%c", x[i]);
	if (xfir == 0)
		for (int i = 0; i < ydx; i++)
			printf("%c", y[i]);

	return 0;
}