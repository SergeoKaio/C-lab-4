#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "task4.h"
#define N 256
#define M 256
int main()
{
	char str[N][M] = { 0 };
	char *g[N] = { 0 };
	int count = 0;

	FILE *fp;
	fp = fopen("1.txt", "r");
	if (fp == NULL)
	{
		puts("Fail ne nayden");
		return 1;
	}

	while (count < 256 && fgets(str[count], 256, fp) != NULL)
	{
		g[count] = str[count];
		count++;
	}
	fclose(fp);
	lineSort(g, count);
	fp = fopen("2.txt", "w");
	if (fp == NULL)
	{
		puts("Fail ne nayden");
		return 1;
	}
    printLinesToFile((const char**)g, count, fp);
	fclose(fp);
	puts("Vse ok");
	return 0;
}