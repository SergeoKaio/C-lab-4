#include "task1.h"

int main()
{
	char arr[NUM_OF_STR][SIZE_OF_STR];
	char *parr[NUM_OF_STR] = { 0 };
	int size = 0;
	printf("Print some strings. Enter blank line to finish.\n");
	for (int i = 0;; i++)
	{
		gets(arr[i]);
		if (!arr[i][0])
			break;
		size++;
		parr[i] = arr[i];
	}
	lineSort(parr, size);
	printLines((const char**)parr, size);
	return 0;
}