/*
	Написать программу, которая позволяет пользователю ввести несколько
	строк с клавиатуры, а затем выводящую их в порядке возрастания длины строки.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task1.h"

#define ROWS 25 // maximum number of rows
#define CHAR_IN_LINE 80 // maximum number of characters in line

int main()
{
	char text[ROWS][CHAR_IN_LINE] = { 0 };
	char *p_str[ROWS] = { NULL };
	int count = 0;
	printf("This program sorts the rows in ascending order. \n"
		"Enter the strings. To end input, enter blank line. \n\n");

	while ((count < ROWS) && (*fgets(text[count], CHAR_IN_LINE, stdin) != '\n'))
		p_str[count] = text[count++];

	lineSort(p_str, count);
	printf("\n\nStrings, sorted in ascending order: \n\n");
	printLines((const char**)p_str, count);
	printf("\n");
	return 0;
}