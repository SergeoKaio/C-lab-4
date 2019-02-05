#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include"task1.h"
#define N 10
#define M 50

int main()
{
	char buf[N][M];
	char *str[N];
	int count = 0;

	while (count < N && *fgets(buf[count], M, stdin) != '\n')
	{
		str[count] = buf[count];
		count++;
	}
	//printLines((const char**)str, count);
	lineSort(str, count);
	printLines((const char**)str, count);

	
	return 0;
}