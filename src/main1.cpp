#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "task1.h"
#define N 100
#define M 100


int main()
{
	
	char buf[N][M];
	char *str[N];
	int size = 0;
	printf("Enter the strings:\n");
	while ((size < N) && (*fgets(buf[size], M, stdin) != '\n'))
	{
		str[size] = buf[size];
		size++;
	}
	lineSort(str, size);
	printLines((const char**)str, size);
	scanf("%d", &size);
	return 0;
} 