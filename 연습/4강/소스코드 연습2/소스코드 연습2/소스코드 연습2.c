#include <stdio.h>
#include <stdlib.h>

//#define _CRT_SECURE_NO_WARNINGS

int main()
{
	#pragma warning(disable:4996)
	int a, b, c;
	printf("������, ������, ���������� ���� �Է��Ͻÿ�.\n");
	scanf_s("%d %o %x", &a, &b, &c);
	printf("%d %#o %#x\n\n", a, b, c);
	printf("������, ������(0���� ǥ��), ��������(0x���� ǥ��)�� ���� �Է��ϼ���.\n");
	scanf_s("%i %i %i", &a, &b, &c);
	printf("%d %d %d\n", a, b, c);

	system("pause");
	return 0;
}