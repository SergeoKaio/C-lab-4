#include "task4.h"
#include "task1.h"

void printLinesToFile(const char *str[], int size, FILE *fp)
{
	for (int i = 0; str[i]; i++)
	{
		fputs(str[i], fp);
	}
}