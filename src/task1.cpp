#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
	return strlen(*(char**)a) - strlen(*(char**)b);
}

void lineSort(char *str[], int size)
{
	qsort(str, size, sizeof(char*), comp);
}

void printLines(const char *str[], int size)
{
	int i = 0;
	while (i < size)
		printf("%s\n", str[i]),	i++;
}


