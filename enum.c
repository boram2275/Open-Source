/*
�ַ�� / ������Ʈ / �ҽ�����: ch03 / prj13 / enum.c
Ű���� enum���� ����� ������ ���� ��� ���
V 1.0 2016.
*/

#include <stdio.h>1

int main(void)
{
	enum DAY { SUN, MON, TUE, WED, THU, FRI, SAT };
	printf("�Ͽ��� ���: %d\n", SUN);
	printf("������ ���: %d\n", WED);

	enum SHAPE { POINT, LINE, TRI = 3, RECT, OCTA = 8, CIRCLE };
	printf("LINE: %d, RECT: %d, CIRCLE: %d\n", LINE, RECT, CIRCLE);

	enum boo1 { FALSE, TRUE };
	enum pl { c = 1972, cpp = 1983, java = 1995, csharp = 2000 };
	printf("false: %d, cpp: %d, csharp: %d\n", false, cpp, csharp);

	return 0;
}