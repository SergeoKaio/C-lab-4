#include <stdio.h>
#include "task1.h"
#define N 10
#define M 64


int main()
{
	char str[N][M];
	char *p[N];
	int count = 0;                                                   
	printf("Write <= %d STR: \n", N);
	while (count < N && *fgets(str[count], M, stdin) != '\n')         
	{
		p[count] = str[count];                                  
		count++;
	}
	lineSort(p, count);
	puts("\nSorted STR: \n");
	printLines(p, count);

	return 0;
}