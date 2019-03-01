#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.h"
#define sLMax 201// max length of string
#define sNumMax 20 // max number of string

int stringEnter(char str[][sLMax], int sNM, char * pStr[])
{
	int j = 0;
	printf("Enter no more than %d strings (no more than %d characters):\n", sNM, sLMax - 1);
	while (j < sNM)
	{
		fgets(str[j], sLMax, stdin);
		if (str[j][0] == '\n')
			break;
		int i = 0; // remove '\n' (ìîæíî strlen)
		while (str[j][i] != '\n')
			i++;
		str[j][i] = '\0';
		pStr[j] = str[j++];
	}
return j;
}

int main()
{
	int sNum = 0;
	char str[sNumMax][sLMax];
	char *pStr[sNumMax];
	sNum = stringEnter(str, sNumMax, pStr);
	lineSort(pStr, sNum);
	printLines((const char**)pStr, sNum);
	return 0;
}