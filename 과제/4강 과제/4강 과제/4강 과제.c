#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	float b;
	printf("평을 제곱으로\n");
	scanf_s("%d", &a);
	b = a * 3.3;
	printf("%d은 %f", a, b);

	system("pause");
	return 0;
}