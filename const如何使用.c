#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

int main()
{
	const int num = 10;
	printf("num=%d\n", num);
	int* const p = &num;
	*p = 20;
	printf("num=%d\n", num);
	int n = 1000;
	*p = &n;
	printf("num=%d\n",n);
	return 0;
}