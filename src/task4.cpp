#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <string.h>
#include <stdio.h>


void printLinesToFile(const char *str[], int size, FILE *fp)
{
	for (int i = 0; i < size; i++)
	{
		fputs(str[i], fp);
		fputs("\n", fp);
	}
		
}