#include <stdio.h>
#include <stdlib.h>

void sub1()
{
	int a = 10;
	static int b = 10;
	printf("sub1 auto a = %d, static b = %d \n", a++, b++);
}

int main()
{
	int a = 0;
	static int b;
	printf("�ʱⰪ1 auto a = %d, static b = %d \n", a, b);
	sub1();
	sub1();
	sub1();
	printf("�ʱⰪ2 auto a = %d, static b = %d \n", a, b);

	system("pause");
}