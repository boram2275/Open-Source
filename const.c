/*
솔루션 / 프로젝트 / 소스파일: ch03 / prj12 / const.c
키워드 cons를 사용한 상수 선언
V 1.0 2016.
*/

#include <stdio.h>1

int main(void)
{
	const double RATE = 0.03;
	int deposit = 800000;

	printf("이자율: %f\n", RATE);
	printf("계좌 잔고: %d\n", deposit);
	printf("이자액: %f\n", deposit * RATE);

	char* str = "좋은 C 언어 입문서";
	char* const title = "진보된 C 언어";

	str = "최근 가장 좋은 C 언어 입문서";

	printf("\n%s: %s\n", str, title);

	return 0;
}