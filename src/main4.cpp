#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "task1.h"
#include "task4.h"

using namespace std;

int main()
{
	int i, j;
	FILE *fp;
	char s[100][100];
	char *str[100];
	char out;

	i = 0;

	while (*fgets(s[i], 256, stdin) != '\n')
	{
		s[i][strlen(s[i]) - 1] = '\0';
		str[i] = s[i];
		i++;
	}
	fp = fopen("C:\\1.txt", "w+");
	lineSort(str, i);
	printLinesToFile(str, i,fp);

	return 0;
}