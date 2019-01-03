/*
	Написать программу, сортирующую строки (см. задачу 1), но использующую
	строки, прочитанные из текстового файла. Результат работы программы также
	записывается в файл.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include "task4.h"
//#include <stdio.h>  // included in header file
#define ROWS 25 
#define CHAR_IN_LINE 80

int main() 
{
	FILE * fpR = fopen("task4R.txt", "r");
	if (fpR == NULL)
	{
		puts("I can't open task4R.txt!");
		return 1;
	}

	char text[ROWS][CHAR_IN_LINE] = { 0 };
	char *pstr[ROWS] = { NULL };
	int count = 0;
	

	while ((count < ROWS) && (*fgets(text[count], CHAR_IN_LINE, fpR) != '\n'))
		pstr[count] = text[count++];

	fclose(fpR);

	FILE *fpW = fopen("task4W.txt", "w");
	if (fpR == NULL)
	{
		puts("I can't open task4W.txt!");
		return 1;
	}


	lineSort(pstr, count);
	printLinesToFile((const char**)pstr, count, fpW);

	fclose(fpW);

	return 0;
}


