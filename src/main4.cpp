#include <stdio.h>
#include "task1.h"
#include "task4.h"

#define N 256
#define M 256
int main()
{
	char *str[N];
	char *p[N];
	int size = 0;
	FILE *fp;
	while (size < N && *fgets(str[size], M, stdin) != '\n')
	{
		p[size] = str[size];
		size++;
	}
	fopen("C:\\1.txt", "w");
	lineSort(str, size);
	printLinesToFile(str, size, fp);

	return 0;
}