#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 10, *pa, **ppa;
	pa = &a;
	ppa = &pa;
	printf("주소 a[%p] pa[%p] ppa[%p] \n", &a, &pa, &ppa);
	printf("a 주소 ==> %p, a 값 ==> %d \n", &a, a);
	printf("pa 값 ==> %p, *pa 값 ==> %d \n", pa, *pa);
	printf("ppa 값 ==> %p, *ppa 값 ==> %d \n", *ppa, **ppa);

	system("pause");
}