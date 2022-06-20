#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k, h;
	printf("출력 문자 수 입력 : ");
	scanf("%d", &h);
	for (i = 1; i <= h; i++)
		printf("%d", i % 10);
	printf("\n");
	k = h / 2;
	for (i = 1; i <= h; i += 2)
	{
		for (j = 1; j <= k; j++)
			printf("%c", ' ');
		k--;
		for (j = 1; j <= i; j++)
			printf("%c", '*');
		printf("\n");
	}
	for (i = h; i >= 1; i -= 2)
	{
		for (j = k; j >= 1; j--)
		{
			printf("%c", ' ');
		}
		k++;
		for (j = h; j >= 1; j--)
		{
			printf("%c", '*');
		}
		printf("\n");
	}

	/*for (i -= 4, k += 2, m = 1; m <= h; m += 2, i -= 2)
	{
	for (j = 1; j <= k; j++)
	{
	printf("%c", ' ');
	}
	k++;
	for (j = 1; j <= i; j++)
	{
	printf("%c", '*');
	}
	printf("\n");
	}*/



	system("pause");
	return 0;
}