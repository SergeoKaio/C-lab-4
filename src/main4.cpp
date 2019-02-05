#include<stdio.h>
#include<string.h>
#include "task4.h"
#include "task1.h"
#define N 10
#define M 128

int main()
{
	int count = 0;
	char buf[N][M] = { 0 };
	char *str[N];
	FILE *fp;
	fp = fopen("111.txt", "r+");
	if (fp == NULL)
	{
		puts("File error!\n");
		return 1;
	}
	while ((fgets(buf[count], M, fp) != NULL))
	{
		str[count] = buf[count++];
	}
	int size = count;
	lineSort(str, size);
	printLinesToFile((const char**)str, size, fp);
	fclose(fp);
	return 0;
}