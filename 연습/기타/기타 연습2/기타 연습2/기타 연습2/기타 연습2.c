#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k=0;
	for (i = 1;i <= 100;i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (k > 2)
				break;
			if (i%j == 0)
				k += 1;
		}
		if (k == 2)
			printf("%d ", i);
		k = 0;
	}
	printf("\n");
	system("pause");
}