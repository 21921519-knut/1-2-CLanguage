#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y, z;
	int k;
	printf("�� ������ �Է� :");
	scanf("%d %d %d", &x, &y, &z);
	if (x>y && x>z)
	{
		if (y > z)
			k = 1;
		else
			k = 2;
	}
	else if (x<y && x<z)
	{
		if (y < z)
			k = 3;
		else
			k = 4;
	}
	else
	{
		if (x < z)
			k = 6;
		else
			k = 5;
	}
	
	switch (k)
	{
	case 1:
		printf("�ִ밪�� %d, �ּڰ��� %d�Դϴ�.\n", x,z);
		break;
	case 2:
		printf("�ִ밪�� %d, �ּڰ��� %d�Դϴ�.\n", x,y);
		break;
	case 3:
		printf("�ִ밪�� %d, �ּڰ��� %d�Դϴ�.\n", z,x);
		break;
	case 4:
		printf("�ִ밪�� %d, �ּڰ��� %d�Դϴ�.\n", y,x);
		break;
	case 5:
		printf("�ִ밪�� %d, �ּڰ��� %d�Դϴ�.\n", y, z);
		break;
	case 6:
		printf("�ִ밪�� %d, �ּڰ��� %d�Դϴ�.\n", z, y);
		break;
	}
	system("pause");
	return 0;
}