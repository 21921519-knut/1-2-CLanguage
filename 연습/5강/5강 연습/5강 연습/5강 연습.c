#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI 3.14
int main()
{
	int a, b, min;
	printf("a b ������ �Է�");
	scanf_s("%d %d", &a, &b);
	min = (a < b) ? a : b;
	printf("a b ������ �� �� �ּҰ� => %d \n", min);

	system("pause");
	return 0;
}