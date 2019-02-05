#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

#define N 10
#define M 256

int main()
{
	char buf[N][M];
	char *str[N];
	int count = 0;
	FILE *fp;
	fp = fopen("1.txt", "r");
	if (fp == NULL)
	{
		puts("File not found!");
		return 1;
	}
	while (count < N && *fgets(buf[count], M, fp) !='\n')
	{
		str[count] = buf[count];
		count++;
	}
	lineSort(str, count);
	fclose(fp);
	fp = fopen("2.txt", "w+");
	printLinesToFile((const char**)str, count, fp);
	fclose(fp);
	return 0;
}