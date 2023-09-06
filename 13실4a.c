#pragma warning(disable:4996)
#include <stdio.h>

//
unsigned int hex(unsigned int, unsigned int, unsigned int, unsigned int);

int main(void) {

	unsigned int a, b, c, d;

	scanf("%u%u%u%u", &a, &b, &c, &d);	//

	printf("%u", hex(a, b, c, d));

	return 0;
}

//
unsigned int hex(unsigned int a, unsigned int b, unsigned int c, unsigned int d) {

	unsigned int res = 0, num;

	unsigned int abn[8], bbn[8], cbn[8], dbn[8];
	int len, idx, sum, bin;

	char ahx[2], bhx[2], chx[2], dhx[2];
	char hexi[17] = "0123456789ABCDEF";
	char hexc[8];

	//dec to bin
	len = 7;
	while (len >= 0) {
		abn[len--] = a % 2;
		a /= 2;
	}

	printf("a:");
	for (int i = 0; i < 8; i++) {
		printf("[%u]", abn[i]);
	}
	printf("\n");
	
	//
	len = 7;
	while (len >= 0) {
		bbn[len--] = b % 2;
		b /= 2;
	}

	printf("b:");
	for (int i = 0; i < 8; i++) {
		printf("[%u]", bbn[i]);
	}
	printf("\n");
	
	//
	len = 7;
	while (len >= 0) {
		cbn[len--] = c % 2;
		c /= 2;
	}

	printf("c:");
	for (int i = 0; i < 8; i++) {
		printf("[%u]", cbn[i]);
	}
	printf("\n");

	//
	len = 7;
	while (len >= 0) {
		dbn[len--] = d % 2;
		d /= 2;
	}

	printf("d:");
	for (int i = 0; i < 8; i++) {
		printf("[%u]", dbn[i]);
	}
	printf("\n");

	//bin to hex
	idx = 1; sum = 0; bin = 1;	//순서 유의
	for (int i = 7; i >= 0; i--) {
		if (i == 3 || i == 0) {
			ahx[idx--] = hexi[sum];
			sum = 0; bin = 1;
		}
		sum += abn[i] * bin;
		printf("a<%d>", sum);
		bin *= 2;
	}
	
	printf("a:");
	for (int i = 0; i < 2; i++)
		printf("{%c}", ahx[i]);
	printf("\n");

	//
	idx = 1; sum = 0; bin = 1;	//순서 유의
	for (int i = 7; i >= 0; i--) {
		if (i == 3 || i == 0) {
			bhx[idx--] = hexi[sum];
			sum = 0; bin = 1;
		}
		sum += bbn[i] * bin;
		printf("b<%d>", sum);
		bin *= 2;
	}

	printf("b:");
	for (int i = 0; i < 2; i++)
		printf("{%c}", bhx[i]);
	printf("\n");

	//
	idx = 1; sum = 0; bin = 1;	//순서 유의
	for (int i = 7; i >= 0; i--) {
		if (i == 3 || i == 0) {
			chx[idx--] = hexi[sum];
			sum = 0; bin = 1;
		}
		sum += cbn[i] * bin;
		printf("c<%d>", sum);
		bin *= 2;
	}

	printf("c:");
	for (int i = 0; i < 2; i++)
		printf("{%c}", chx[i]);
	printf("\n");

	//
	idx = 1; sum = 0; bin = 1;	//순서 유의
	for (int i = 7; i >= 0; i--) {
		if (i == 3 || i == 0) {
			dhx[idx--] = hexi[sum];
			sum = 0; bin = 1;
		}
		sum += dbn[i] * bin;
		printf("d<%d>", sum);
		bin *= 2;
	}

	printf("d:");
	for (int i = 0; i < 2; i++)
		printf("{%c}", dhx[i]);
	printf("\n");

	//hex to sum//
	idx = 0;
	for (int i = 0; i < 2; i++)
		hexc[idx++] = ahx[i];
	for (int i = 0; i < 2; i++)
		hexc[idx++] = bhx[i];
	for (int i = 0; i < 2; i++)
		hexc[idx++] = chx[i];
	for (int i = 0; i < 2; i++)
		hexc[idx++] = dhx[i];
	
	for (int i = 0; i < idx; i++)
		printf("[%c]", hexc[i]);
	printf("\n");

	//sum to dec//
	for (int i = idx - 1, hx = 1; i >= 0; i--, hx *= 16) { //순서 유의
		if (hexc[i] == '0')
			num = 0;
		else if (hexc[i] == '1')
			num = 1;
		else if (hexc[i] == '2')
			num = 2;
		else if (hexc[i] == '3')
			num = 3;
		else if (hexc[i] == '4')
			num = 4;
		else if (hexc[i] == '5')
			num = 5;
		else if (hexc[i] == '6')
			num = 6;
		else if (hexc[i] == '7')
			num = 7;
		else if (hexc[i] == '8')
			num = 8;
		else if (hexc[i] == '9')
			num = 9;
		else if (hexc[i] == 'A')
			num = 10;
		else if (hexc[i] == 'B')
			num = 11;
		else if (hexc[i] == 'C')
			num = 12;
		else if (hexc[i] == 'D')
			num = 13;
		else if (hexc[i] == 'E')
			num = 14;
		else if (hexc[i] == 'F')
			num = 15;

		res += num * hx;
	}

	return res;
}
