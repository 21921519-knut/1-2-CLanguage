#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 10, *pa, **ppa;
	pa = &a;
	ppa = &pa;
	printf("�ּ� a[%p] pa[%p] ppa[%p] \n", &a, &pa, &ppa);
	printf("a �ּ� ==> %p, a �� ==> %d \n", &a, a);
	printf("pa �� ==> %p, *pa �� ==> %d \n", pa, *pa);
	printf("ppa �� ==> %p, *ppa �� ==> %d \n", *ppa, **ppa);

	system("pause");
}