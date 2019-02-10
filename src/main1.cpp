#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.h"
#define N 128
#define M 256

int main()
{
	char str[N][M];
	char *p[N];
	int count = 0;
	while (count < N && *fgets(str[count], M, stdin) != '\n')
	{
		p[count] = str[count];
		count++;
	}
	lineSort(p, count);
	printLines((const char**)p, count);
}