#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>



void printLinesToFile(const char *str[], int size, FILE *fp)
{
	for (int i = 0; i < size; i++)
		fputs(str[i], fp);

}