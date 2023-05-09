#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	int i, j;
	char a[3], gs, e[3] = {'_', '_', '_'}, tmp;

	for (i = 0; i < 3; i++)
		scanf("%c", &a[i]);
	getchar();						//

	for (i = 0; i < 5; i++)
	{
		scanf("%c%c", &gs, &tmp);	//

		if (gs == a[0])
			e[0] = a[0];
		else if (gs == a[1])
			e[1] = a[1];
		else if (gs == a[2])
			e[2] = a[2];

		for (j = 0; j < 3; j++)
			printf("%c ", e[j]);
		
		if (a[0] == e[0] && a[1] == e[1] && a[2] == e[2])
			break;
		else
			printf("\n");
	}

	return 0;
}