/*
솔루션 / 프로젝트 / 소스파일: ch03 / prj10 / charliteral.c
이스케이프 문자를 비롯해서 다양한 문자 리터럴의 표현
V 1.0 2016.
*/

#include <stdio.h>1

int main(void)
{

	printf("%Casic", 'B');      printf("%c", '\n');

	char sq = '\'';

	printf("BCPL\tB\tC\tJAVA\n");
	printf("%c\7\n", '\a');
	printf("%c자바언어'\n", sq);

	printf("\"C언어\" 정말 재미있다!\n");

	return 0;
}