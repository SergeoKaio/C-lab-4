#include <stdio.h>
#include "task4.h"
#include "task1.h"
#define N 10
#define M 128

int main()
{
	char text[N][M];
	char *str[N];
	int count = 0;
	FILE *fp;
	fp = fopen("1.txt", "r");
	if (fp == NULL)
	{
		puts("ERROR! File not found!");
		return 1;
	}
	while (count < N && *fgets(text[count], M, fp) != '\n')
	{
		str[count] = text[count];
		count++;
	}
	lineSort(str, count);
	fclose(fp);
	fp = fopen("2.txt", "w+");
	printLinesToFile((const char**)str, count, fp);
	fclose(fp);
	return 0;
}