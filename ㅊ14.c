#pragma warning (disable : 4996) //scanf() �Է� �Լ��� ���� ���� ����
#include <stdio.h>               //����� ��� ���õ� ��� ������ ����

int main(void) { //main() �Լ��� �� �ϳ�: ��ȯ���� int(���⼱ 0), �Ű������� void(����)

	/*������ ���� �� �ʱ�ȭ*/
	int N, n, cnt = 0, flg;

	/*������ �� �Է�*/
	scanf("%d", &N);

	/*������ �� ���*/
	n = 2;
	while (N != 1) {
		if (N % n == 0) {
			N /= n;
			cnt++;
			flg = 1;
		}
		else {
			if (flg == 1)
				printf("%d %d\n", n, cnt);
			n++;
			cnt = 0;
			flg = 0;
		}

		if (flg == 1 && N == 1)
			printf("%d %d\n", n, cnt);
	}

	/*������ �� ���*/
	

	return 0;   //main() �Լ��� ��: ���α׷��� ���� ����
}