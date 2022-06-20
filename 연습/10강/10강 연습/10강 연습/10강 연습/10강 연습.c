#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*int sum_array(int ar[], int x);
int main()
{
	int array[5] = {10, 20, 30, 40, 50}, sum;
	sum = sum_array(array, 5);
	printf("array 배열의 합 ==> %d \n",sum);
	for (int i = 0; i < 5; i++)
	{
		printf("array 배열 ==> ar[%d]=%d \n", i, array[i]);
	}

	system("pause");
}

int sum_array(int ar[], int x)
{
	int hap = 0, i;
	for (i = 0; i < x; i++)
	{
		hap = hap + ar[i];
		printf("array 배열 ==> ar[%d]=%d \n", i,ar[i]);
	}
	for (i = 0; i < x; i++)
	{
		ar[i] *= 10;
		printf("array 배열 ==> ar[%d]=%d \n", i, ar[i]);
	}
	return hap;
}*/

int sum_array(int *ar, int );
int main()
{
	int array[5] = { 10, 20, 30, 40, 50 }, sum;
	sum = sum_array(array, 5);
	printf("array 배열의 합 ==> %d \n", sum);
	for (int i = 0; i < 5; i++)
	{
		printf("array 배열 ==> ar[%d]=%d \n", i, array[i]);
	}

	system("pause");
}

int sum_array(int *ar, int x)
{
	int hap = 0, i;
	for (i = 0; i < x; i++)
	{
		hap = hap + *(ar+i);//*ar++)
		printf("array 배열 ==> ar[%d]=%d \n", i, *(ar+i));
	}
	for (i = 0; i < x; i++)
	{
		*(ar+i) *= 10;
		printf("array 배열 ==> ar[%d]=%d \n", i, *(ar+i));
	}
	return hap;
}