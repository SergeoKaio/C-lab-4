#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include "task1.h"
#define N 10
#define M 128


int main()
{
	int count = 0;
	char buf[N][M] = { 0 };
	char *str[N];
	printf("Enter the strings:\n");
	while ((count < N) && (*fgets(buf[count], M, stdin) != '\n'))
	{
		str[count] = buf[count++];
	}
	int size = count;
	lineSort(str, size);
	printLines((const char**)str, size);
	printf("\n");
	return 0;
}