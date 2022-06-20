#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y, z;
	int k;
	printf("세 정수를 입력 :");
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
		printf("최대값은 %d, 최솟값은 %d입니다.\n", x,z);
		break;
	case 2:
		printf("최대값은 %d, 최솟값은 %d입니다.\n", x,y);
		break;
	case 3:
		printf("최대값은 %d, 최솟값은 %d입니다.\n", z,x);
		break;
	case 4:
		printf("최대값은 %d, 최솟값은 %d입니다.\n", y,x);
		break;
	case 5:
		printf("최대값은 %d, 최솟값은 %d입니다.\n", y, z);
		break;
	case 6:
		printf("최대값은 %d, 최솟값은 %d입니다.\n", z, y);
		break;
	}
	system("pause");
	return 0;
}