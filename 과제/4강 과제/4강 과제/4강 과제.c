#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	float b;
	printf("���� ��������\n");
	scanf_s("%d", &a);
	b = a * 3.3;
	printf("%d�� %f", a, b);

	system("pause");
	return 0;
}