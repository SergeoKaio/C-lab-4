#include<stdio.h>
#include<string.h>
#include "task4.h"


int main()
{
	int size = 0;
	char buf[100][100] = { 0 };
	char *str[100];
	FILE *fp;
	fp = fopen("text.txt", "r+");
	if (fp == NULL)
	{
		puts("File error!\n");
		return 1;
	}
	while ((fgets(buf[size], 100, fp) != NULL))
	{
		str[size] = buf[size++];
	}
	lineSort(str, size);
	printLinesToFile((const char**)str, size, fp);
	fclose(fp);
	return 0;
}