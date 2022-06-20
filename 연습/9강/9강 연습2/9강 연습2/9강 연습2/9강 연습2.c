#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARININGS
#define TRUE 1
#define FALSE 0

/*int main()
{
	int i = 0, j = 0, k = 0;
	char a[45] = "Korea National";
	char b[] = "University of transportation";
	for (k = 0; k < 45; k++)
	{	
		printf("a[%d]=%c ", k, a[k]);
	}
	printf("\n");

	printf("%s + %s => \n", a, b);
	while (a[i] != '\0')
	{
		i++;
	}
	
	printf("null char = %d\n", i);

	printf("%d \n", i);
	printf("a =>%s", a);
	a[i] = ' ';
	i++;

	
	while (b[j] != '\0')
	{
		printf("i=%d a =>%s \n", i, a);
		a[i] = b[j];
		i++;
		j++;
	}
	a[i] = '\0';
	printf("문자열 결합 결과 = %s", a);

	system("pause");
}*/

int main()
{
	int i, j, sw, temp, su[6] = { 4,8,2,6,7,5 };
	for (i = 5; i > 0; i--)
	{
		sw = TRUE;
		for (j = 0; j < i; j++)
		{
			if (su[j] < su[j + 1])
			{
				printf("su[%d] = %d su[%d]= %d \n", j, su[j], j + 1, su[j + 1]);
				temp = su[j];
				su[j] = su[j + 1];
				su[j + 1] = temp;
				sw = FALSE;
				printf("su[%d] = %d su[%d]= %d \n", j, su[j], j + 1, su[j + 1]);
			}
		}
		if (sw == TRUE)
			break;
	}
	for (i = 0; i < 6; i++)
		printf("su[%d] = %d \n", i, su[i]);
	printf("\n");

	system("pause");
}