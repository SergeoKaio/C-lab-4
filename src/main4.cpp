#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"task4.h"
#define N 20
#define M 50

int main()
{
	char buf[N][M];
	char *str[N];
	int count = 0;

	FILE *fp;
	fp = fopen("sort_str.txt", "r+");

	if (fp == NULL)
	{
		puts("File not found!");
		return 1;
	}

	while (count < N && fgets(buf[count], M, fp) != NULL && buf[count][0] != '\n')
	{
		str[count] = buf[count];
		printf("%s", str[count]);
		count++;
	}
	
	lineSort(str, count);
	printLines((const char**)str, count);
	printLinesToFile((const char**)str, count, fp);

	fclose(fp);
	return 0;
}