#pragma warning (disable : 4996) //scanf() �Է� �Լ��� ���� ���� ����
#include <stdio.h>               //����� ��� ���õ� ��� ������ ����

int main(void) { //main() �Լ��� �� �ϳ�: ��ȯ���� int(���⼱ 0), �Ű������� void(����)

	/*������ ���� �� �ʱ�ȭ*/
	int N, sum = 0, cnt = 0; //
	double avg;

	/*������ �� �Է�*/
	scanf("%d", &N); //

	/*������ �� ���*/
	while (N > 0) {
		if (N <= 100) {
			sum += N;
			cnt++;
		}
		scanf("%d", &N);
	}

	/*������ �� ���*/
	avg = (double)sum / cnt;
	printf("%d %.2f %d", sum, avg, cnt);

	return 0;   //main() �Լ��� ��: ���α׷��� ���� ����
}