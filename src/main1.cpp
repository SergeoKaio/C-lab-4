#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task1.h"

#define SIZE 50

int main()
{
	char arr[SIZE][SIZE] = { 0 };
	char *str[SIZE];
	printf("Enter strings. If you are finished, just press Enter twice.\n");
	int i = 0;
	for (i = 0; i >= 0; i++)
	{
		fgets(arr[i], SIZE, stdin);
		if (arr[i][0] == '\n')
		{
			break;
		}
		str[i] = &arr[i][0];
	}
	lineSort(str, i);
	printLines(str, i);

	return 0;
}