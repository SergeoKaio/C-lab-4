#include "task1.h"
#include "task4.h"

int main()
{
	char arr[NUM_OF_STR][SIZE_OF_STR] = { 0 };
	char *parr[NUM_OF_STR] = { 0 };
	FILE *fp = fopen("lab4Read.txt", "r");
	if (!fp)
	{
		printf("Cannot open file to read");
		return 1;
	}
	int size = 0;
	while (!feof(fp))
	{
		fgets(arr[size], SIZE_OF_STR, fp);
		parr[size] = arr[size];
		size++;
	}
	fclose(fp);
	lineSort(parr, size);
	fp = fopen("lab4Write.txt", "w");
	if (!fp)
	{
		printf("Cannot open file to write");
		return 2;
	}
	printLinesToFile((const char**)parr, size, fp);
	fclose(fp);
	return 0;
}