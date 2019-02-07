#include "task4.h"
#include <stdio.h>
#define N 255
#include <string.h>

int main()
{
	char str[N][N] = { 0 };
	char *pstr[N] = { NULL };
	int size = 0;
	FILE *fp;
	fp = fopen("test.txt", "r");
	if (fp == NULL)
	{
		puts("File not found");
		return 1;
	}
	while (fgets(str[size], N, fp) != NULL)
	{
		pstr[size] = str[size];
		size++;

	}
	fclose(fp);
	lineSort(pstr, size);
	printLinesToFile((const char**)pstr, size, fp);
	return 0;
}