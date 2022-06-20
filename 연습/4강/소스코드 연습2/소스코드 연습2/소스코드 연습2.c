#include <stdio.h>
#include <stdlib.h>

//#define _CRT_SECURE_NO_WARNINGS

int main()
{
	#pragma warning(disable:4996)
	int a, b, c;
	printf("십진수, 팔진수, 십육진수를 각각 입력하시오.\n");
	scanf_s("%d %o %x", &a, &b, &c);
	printf("%d %#o %#x\n\n", a, b, c);
	printf("십진수, 팔진수(0리딩 표현), 십육진수(0x리딩 표현)를 각각 입력하세요.\n");
	scanf_s("%i %i %i", &a, &b, &c);
	printf("%d %d %d\n", a, b, c);

	system("pause");
	return 0;
}