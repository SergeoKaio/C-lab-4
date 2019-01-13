#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task4.h"

int main(void)
{
	char food[10][256];
	char *str[10];
	int i = 0;

	FILE *fp;
	fp = fopen("111.txt", "r+");
	if (fp == NULL)
		puts("file not found");
	
	while (fgets(food[i], 256, fp) != NULL)
		str[i] = food[i], ++i;
	
	lineSort(str, i);
	printLinesToFile((const char**)str, i, fp);

	fclose(fp);
	
	getchar();
	return 0;
}
