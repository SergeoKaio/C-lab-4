#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compar(const void* p1, const void* p2)
{
	return strlen(*(char**)p1) - strlen(*(char**)p2);
}
void lineSort(char *str[], int size)
{
	qsort(str, size, sizeof(char*), compar);
}

void printLines(const char *str[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%s\n", str[i]);
}