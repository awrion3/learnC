#pragma warning (disable : 4996) //scanf() �Է� �Լ��� ���� ���� ����
#include <stdio.h>               //����� ��� ���õ� ��� ������ ����

int main(void) { //main() �Լ��� �� �ϳ�: ��ȯ���� int(���⼱ 0), �Ű������� void(����)//

	/*������ ���� �� �ʱ�ȭ*/
	int A, B, C, a, b, c;
	int S, s, gap, hr, mn, sc;

	/*������ �� �Է�*/
	scanf("%d%d%d", &A, &B, &C);
	scanf("%d%d%d", &a, &b, &c);
	
	/*������ �� ���*/
	S = A * 60 * 60 + B * 60 + C;
	s = a * 60 * 60 + b * 60 + c;
	
	gap = s - S;

	hr = gap / (60 * 60);
	gap %= (60 * 60);

	mn = gap / 60;
	gap %= 60;

	sc = gap;

	/*������ �� ���*/
	printf("%02d:%02d:%02d", hr, mn, sc); //%[0�÷���][2�����][d�ڷ���]

	return 0; //main() �Լ��� ��: ���α׷��� ���� ����//
}