#include <string.h>
#include <stdio.h>

void lineSort(char *str[], int size)
{
	char *buf;
	for (int i = 0; i < size-1; i++)
		for (int j=i;j<size;j++)
	
		if (strlen(str[i]) > strlen(str[j]))
		{
			buf = str[i];
			str[i] = str[j];
			str[j] = buf;
		}
	
}

void printLines(char *str[], int size)
{
	for (int i = 0; i < size; i++)
		puts(str[i]);
}