#pragma warning (disable:4996)
#include <stdio.h>

int main(void) {

	char ch[10], mch;   //char�� �迭 ����
	int cf[10] = { 0 }; //int�� �迭 ���� �� �ʱ�ȭ
	char *cp = ch, *kp = ch; //char�� ������ ���� �� ����
	int *cfp = cf;	         //int�� ������ ���� �� ����
	int i = 0, cnt = 0, max = 0;

	for (cp = ch; cp < ch + 10; cp++) //�ּҷ� �迭 �����Ͽ�
		scanf("%c", cp);		 //�迭 ���� �� �Է¹ޱ�

	for (cp = ch; cp < ch + 10; cp++) { //�ּҷ� �迭 �����Ͽ�
		for (kp = ch; kp < ch + 10; kp++)
			if (*cp == *kp)				//�� �迭 ������ �󵵼� Ȯ��
				++*(cf + i);			//�󵵼� �� �迭 cf�� ����
		i++;
	}

	for (cfp = cf, cp = ch; cfp < cf + 10; cfp++, cp++) //�ּҷ� �迭 �����Ͽ� (�Ѵ� ���� �ʿ�)
		if (*cfp > max) {
			max = *cfp;	//�ִ� �󵵼� ��
			mch = *cp;	//�ش� ���� ����
		}

	printf("%c %d", mch, max);

	return 0;
}