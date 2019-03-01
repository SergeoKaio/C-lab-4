#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task4.h"
#define sLMax 200// max length of string
#define sNumMax 20 // max number of string
FILE *mf;

int main(void)
{
	char str[sNumMax][sLMax];
	char *pStr[sNumMax];
	mf = fopen("task4.txt", "a+");
	if (mf == NULL)
	{
		printf("file open error\n");
		return -1;
	}
	int sNum = 0;
	while (sNum < sNumMax && (pStr[sNum] = fgets(str[sNum], sLMax, mf)) != NULL)
		sNum++;
	fputs("\nlineSort result:\n", mf);
	lineSort(pStr, sNum);
	printLinesToFile((const char **)pStr, sNum, mf);
	fclose(mf);
return 0;
}