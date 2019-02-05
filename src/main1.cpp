#include <stdio.h>
#include <string.h>
#include "task1.h"


int main(void)
{
	char food[10][100];
	char *str[10];
	int len;
	int i = 0;

	while (*fgets(food[i], 100, stdin) != '\n')
	{
		len = strlen(food[i]);
		if (food[i][len - 1] == '\n')
			food[i][len - 1] = '\0';
		str[i] = food[i], ++i;
	}

	lineSort(str, i);
	printLines((const char**)str, i);
	
	getchar();
	return 0;
}