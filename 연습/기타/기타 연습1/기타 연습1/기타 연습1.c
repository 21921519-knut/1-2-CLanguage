#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _CRT_SECURE_NO_WARNINGS

int main()
{
	double f, c=0.0;
	printf("¼·¾¾ÀÔ·Â : ");
	scanf("%lf", &c);
	f = c*9.5 + 32;
	printf("¼·¾¾ %f = È­¾¾ %f\n", c, f);

	system("pause");
}