#pragma warning (disable : 4996) //scanf() �Է� �Լ��� ���� ���� ����
#include <stdio.h>               //����� ��� ���õ� ��� ������ ����

int main(void) { //main() �Լ��� �� �ϳ�: ��ȯ���� int(���⼱ 0), �Ű������� void(����)//

	/*������ ���� �� �ʱ�ȭ*/
	char ch, flg = 0;
	int N, tmp, cnt = 0, dnt = 0;
	int cax = 0, dax = 0;

	/*������ �� �Է�*/
	scanf("%d%d", &N, &tmp); /*tmp�� ���� %c���� �Է� ���� ����*/
	
	scanf("%c", &ch); //
	N--; //

	if (ch >= 'a' && ch <= 'z') {
		cnt++;

		cax = cnt;

		flg = 2; ///
	}
	if (ch >= '0' && ch <= '9') {
		dnt++;

		dax = dnt;

		flg = 1; ///
	}
	
	/*������ �� ���*/
	while (N > 0) { //
		scanf("%c", &ch);

		if (ch >= 'a' && ch <= 'z') {
			if (flg == 2) { ///
				cnt++;

				if (cax < cnt)
					cax = cnt;
			}
			else {
				cnt = 1;

				cax = cax;
			}
			
			flg = 2; ///
		}
		if (ch >= '0' && ch <= '9') {
			if (flg == 1) { ///
				dnt++;

				if (dax < dnt)
					dax = dnt;
			}
			else {
				dnt = 1;

				dax = dax;
			}
		
			flg = 1; ///
		}

		N--; //
	}
	
	/*������ �� ���*/
	printf("%d\n%d\n", cax, dax);

	return 0; //main() �Լ��� ��: ���α׷��� ���� ����//
}