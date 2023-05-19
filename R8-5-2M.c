#pragma warning (disable:4996)	//
#include <stdio.h>				//

/**/
int reverse_num(int);
int del_dupnum(int);

/**/
int main(void) {

	int N;
	scanf("%d", &N);

	printf("%d", del_dupnum(reverse_num(N)));

	return 0;
}

/**/
int reverse_num(int x) {

	int v = 0;

	while (x != 0) {
		v *= 10;
		v += x % 10;
		x /= 10;
	}

	return v;
}

int del_dupnum(int x) {

	int arr[9], idx = 0, del[9];
	int fl, kdx = 0, val = 0;

	while (x != 0) {
		arr[idx++] = x % 10;
		x /= 10;
	}

	for (int i = 0; i < idx; i++)
	{
		fl = 1;
		for (int j = 0; j < i; j++)
			if (arr[i] == arr[j])
				fl = 0;

		if (fl == 1)
			del[kdx++] = arr[i];
	}

	for (int i = 0; i < kdx; i++)
	{
		val *= 10;
		val += del[i];
	}

	return val;
}