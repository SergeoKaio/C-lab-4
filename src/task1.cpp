#include "task1.h"

void lineSort(char *str[], int size)
{
	char *temp = NULL;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (strlen(str[j]) > strlen(str[i]))
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
}

void printLines(const char *str[], int size)
{
	for (int i = 0; i < size; i++)
		puts(str[i]);
}