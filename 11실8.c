#pragma warning (disable:4996)
#include <stdio.h>

//����ü ����
struct complex {
	double real, imag;
};

//�Լ� ����
struct complex add(struct complex, struct complex);

//����� ����ü�� ��쿡��, �Լ� ���� ���� struct complex; �� �����ϰ�,
//�Լ� ���� �Ŀ� ������ �� �ִ� (�Լ��� �޸� ���ǰ� �����Լ� ���� �־�� ��)

int main(void) {

	struct complex a, b, c;	//����ü ���� ����

	scanf("%lf%lf", &a.real, &a.imag);	//����ü ����� �� �Է�
	scanf("%lf%lf", &b.real, &b.imag);

	c = add(a, b);	//�Լ� ȣ�� �� ��ȯ�� ����ü ����

	printf("%.1f + %.1fi", c.real, c.imag);	//����ü ��� �� ���Ŀ� �°� ���

	return 0;
}

//�Լ� ����
struct complex add(struct complex a, struct complex b) {

	struct complex c;

	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;

	return c;
}