#pragma warning (disable:4996)
#include <stdio.h>

//����ü ����
struct date {
	int year, month, day;
};

//�Լ� ����
struct date* select_min(struct date* , struct date*);

int main(void) {

	struct date a, b, *p;

	//�Է� ������ ������ ���
	scanf("%d/%d/%d", &a.year, &a.month, &a.day);
	scanf("%d/%d/%d", &b.year, &b.month, &b.day);

	//�Լ����� ��ȯ���� �ּҸ� ����
	p = select_min(&a, &b);

	//���
	printf("%d/%d/%d\n", p->year, p->month, p->day);

	return 0;
}

//�Լ� ����
struct date* select_min(struct date* a, struct date* b) {

	if (a->year < b->year)
		return a;
	else if (a->year > b->year)
		return b;
	else {	//���� ������
		if (a->month < b->month)
			return a;
		else if (a->month > b->month)
			return b;
		else {	//���� ������
			if (a->day < b->day)
				return a;
			else if (a->day > b->day)
				return b;
			else  //�ϱ��� ���� �� 
				return a;
		}
	}
}
