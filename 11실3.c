#pragma warning (disable:4996)
#include <stdio.h>

//구조체 정의
struct student {
	char name[5];	//널 문자 고려
	int score;
};

int main(void) {

	int sum = 0;
	double avg;
	//구조체 변수 선언 (배열 형태)
	struct student clas[5];

	for (int i = 0; i < 5; i++) {
		scanf("%s", clas[i].name);	//배열 이름이므로 주소 연산자 사용하지 않음에 유의
		scanf("%d", &clas[i].score);
	} //scanf의 %s는 1) 공백/개행/탭 포함 못하며(전까지 인식) 2) 널 문자 포함 문자열로 저장해준다 (인자가 주소임)
	  //따라서 주의! %c의 경우 getchar()가 필요하였으나, %s는 아니다! 

	for (int i = 0; i < 5; i++) 
		sum += clas[i].score;

	avg = (double)sum / 5;

	//출력
	for (int i = 0; i < 5; i++) 
		if (clas[i].score <= avg)
			printf("%s\n", clas[i].name);

	return 0;
}