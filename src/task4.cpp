#include <string.h>
#include <stdlib.h>  //for qsort() and strcmp()
//#include <stdio.h>  // included in header file
#include "task4.h"


void printLinesToFile(const char *str[], int size, FILE *fp)
{
	for (int i = 0; i < size; i++)
	{
		fputs(str[i], fp);
		if (str[i][strlen(str[i]) - 1] != '\n')
			fprintf(fp, "\n");
	}
}