#include <stdio.h>
#include <string.h>

void lineSort(char *str[], int size)//сортировка массива указателей
{
	char *buf;
	for (int i = 0; i < size - 1; i++)
		for (int j = i; j < size; j++)

			if (strlen(str[i]) > strlen(str[j]))
			{
				buf = str[i];
				str[i] = str[j];
				str[j] = buf;
			}
}

void printLines(char *str[], int size) //печать строки в порядке массива str
{
	for (int i = 0; i < size; i++)
		printf("%s \n", str[i]);
}


