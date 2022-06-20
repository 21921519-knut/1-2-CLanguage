#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI 3.14
int main()
{
	int a, b, min;
	printf("a b 데이터 입력");
	scanf_s("%d %d", &a, &b);
	min = (a < b) ? a : b;
	printf("a b 데이터 값 중 최소값 => %d \n", min);

	system("pause");
	return 0;
}