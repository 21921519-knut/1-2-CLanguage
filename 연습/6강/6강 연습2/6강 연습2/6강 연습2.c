#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 1, n, k, FACT = 1;
	printf("15������ k�� �Է� => ");
	scanf("%d", &k);
	for (n = 2; n <= k; n++)
	{
		while (i <= n)
		{
			FACT = FACT * i;
			i++;
		}
		printf("%d FACTORIAL ==> %d \n", n, FACT);
	}
	

	system("pause");
	return 0;
}