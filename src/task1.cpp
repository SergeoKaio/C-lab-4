#include<stdio.h>
#include<stdlib.h>
#include<cstring>

int compar(const void* p1, const void* p2)
{
	if (strlen(*(char**)p1) > strlen(*(char**)p2))
		return 1;
	else
		return -1;
}
void lineSort(char *str[], int size)
{
	qsort(str, size, sizeof(char**), compar);
}

void printLines(const char *str[], int size)
{
	int i = 0;
	while (i < size)
	{
		printf("%s", str[i]);
		if (str[i][strlen(str[i]) - 1] != '\n')
			putchar('\n');
		i++;
	}
} 

