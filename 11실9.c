#pragma warning (disable:4996)
#include <stdio.h>

//����ü ����
struct result {
	int high, low, pgap; //���� ���� ���� �� �հ� ���� ������
	int gap;			 //������
	char porf;			 //���� ��� ����
};

//�Լ� ����
void passorfail(struct result* p) {

	p->gap = p->high - p->low;	//�����͸� Ȱ���� ���� �����Ͽ� �� ��ȯ���� �ʾƵ� ��

	if (p->gap <= p->pgap)
		p->porf = 'P';
	else
		p->porf = 'F';
}

int main(void) {

	struct result st;	//����ü ����

	//����ü ����鿡 �� ����
	scanf("%d%d%d", &st.high, &st.low, &st.pgap);

	//�Լ� ȣ�� (����ü �ּ� ����)
	passorfail(&st);

	//����ü ��� ���� ���
	printf("%d %c", st.gap, st.porf);

	return 0;
}