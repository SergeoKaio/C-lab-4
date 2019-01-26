#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "task1.h"
#include "task4.h"

#define N 256
#define M 256
int main()
{
	char *str[N];
	char p[N][M];
	int i = 0;
	FILE *fp;
	while (*fgets(p[i], M, stdin) != '\n')
	{
		p[i][strlen(p[i]) - 1] = '\0';
		str[i] = p[i];
		i++;
	}
	fopen("C:\\1.txt", "w");
	lineSort(str, i);
	printLinesToFile(str, i, fp);

	return 0;
}