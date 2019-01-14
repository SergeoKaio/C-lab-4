#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task4.h"

#define SIZE 50

int main()
{
	char arr[SIZE][SIZE] = { 0 };
	char *str[SIZE];
	FILE *fp;
	fp = fopen("text4.txt", "r+");
	if (fp == 0)//cheking of the file
	{
		printf("File error!\n");
		return 1;
	}
	int i = 0;
	while(!feof(fp))
	{
		fgets(arr[i], SIZE, fp);
		str[i] = &arr[i][0];
		i++;
	}
	lineSort(str, i);
	printLinesToFile(str, i, fp);
	fclose(fp);
	return 0;
}