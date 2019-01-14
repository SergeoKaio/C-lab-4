#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void lineSort(char *str[], int size)
{
	int flag = 0;
	char *tempStr;
	for (int i = size - 1; i >= 0; i--)
	{
		flag = 1;
		for (int j = 0; j < i; j++)
		{
			if (strlen(str[j]) > strlen(str[j + 1]))
			{
				tempStr = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tempStr;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}

void printLines(const char *str[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%s", str[i]);
}