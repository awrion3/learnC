#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	unsigned int a, b, c, d, r = 0;
	
	scanf("%u%u%u%u", &a, &b, &c, &d);

	//�� ������ ����
	r |= a << 24;	//8 bit �ڸ��� �̵���Ű�� ��
	r |= b << 16;	//������ �켱������ ����//
	r |= c << 8; 
	r |= d;			//���İ���
	
	printf("%u", r);
	
	return 0;
}
