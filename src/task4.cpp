#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printLinesToFile(const char *str[], int size, FILE *fp)
{
	int i = 0;
	while (i < size)
		fputs(str[i], fp), i++;
}