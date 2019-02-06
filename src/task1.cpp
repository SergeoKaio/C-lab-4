#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define temp_size 128

int compare(const void *a, const void *b)
{
	/*if (strlen(*(char**)a) > strlen(*(char**)b))
		return 1;
	else
		return -1;*/
	return strlen(*(char**)a) - strlen(*(char**)b);
}
void lineSort(char *str[], int size)//функция, сортирующая массив указателей
{
	qsort(str, size, sizeof(char**), compare);
	//char temp[255];
	//int i = 0;
	//while (str[i] != NULL)
	//{
	//	

	//	/*if (strlen(str[i]) > strlen(str[i + 1]))
	//	{
	//		int max = strlen(str[i]);
	//		for (int j = 0; j <= max; j++)
	//		{
	//			temp[j] = str[i][j];
	//			str[i][j] = str[i + 1][j];
	//			str[i + 1][j] = temp[j];
	//		}
	//		i = 0;
	//	}
	//	else i++;*/
	//	
	//}
}
void printLines(const char *str[], int size)//функция, печатающая строки в порядке массива str
{
	int i = 0;
	while (str[i] != NULL)
	{
	
		printf("%s", str[i]);
		i++;
	}
	printf("end.");
}