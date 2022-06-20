#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
void sum(struct sungjuk);
struct sungjuk {
	int hakbun;
	char name[10];
	int c;
	int php;
	int asp
};

int main()
{
	int hap;
	struct sungjuk hak = { 2011001,"Á¤¿ì¼º",89,98,100 };
	struct sungjuk *phak;
	phak = &hak;
	sum(phak);
	printf("%d %s ÃÑÁ¡ ==> [%d] \n", phak->hakbun, phak->name, phak->hap);
	
	system("pause");
}
void sum(struct sungjuk *pphap)
{
	pphap->hap = pphap->c+pphap->as+phap->php*;
}




