/*
솔루션 / 프로젝트 / 소스파일: ch03 / prj13 / enum.c
키워드 enum으로 만드는 열거형 정수 상수 목록
V 1.0 2016.
*/

#include <stdio.h>1

int main(void)
{
	enum DAY { SUN, MON, TUE, WED, THU, FRI, SAT };
	printf("일요일 상수: %d\n", SUN);
	printf("수요일 상수: %d\n", WED);

	enum SHAPE { POINT, LINE, TRI = 3, RECT, OCTA = 8, CIRCLE };
	printf("LINE: %d, RECT: %d, CIRCLE: %d\n", LINE, RECT, CIRCLE);

	enum boo1 { FALSE, TRUE };
	enum pl { c = 1972, cpp = 1983, java = 1995, csharp = 2000 };
	printf("false: %d, cpp: %d, csharp: %d\n", false, cpp, csharp);

	return 0;
}