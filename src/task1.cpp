#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <string.h>
#include <stdio.h>

void lineSort(char *str[], int size)
{

	for (int i = 0; i < size-1;i++)
	{
		for (int j = 0; j < size-1;j++)
		{
			int a = strlen(str[j]);
			int b = strlen(str[j+1]);
			if (a > b)
			{
				char tmp [256];
				strcpy(tmp, str[j+1]);
				strcpy(str[j+1], str[j]);
				strcpy(str[j], tmp);
			}
		}
	}
}

void printLines(const char *str[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s", str[i]);
	}
}