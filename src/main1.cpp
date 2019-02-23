/*Ќаписать программу, котора€ позвол€ет пользователю ввести несколько
строк с клавиатуры, а затем вывод€щую их в пор€дке возрастани€ длины строки.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.h"

int main()
{

	int i = 0;
	char s[256][256];
	char *str[100];

	printf("enter strings:\n");
	while (*fgets(s[i], 256, stdin) != '\n')
	{
		s[i][strlen(s[i]) - 1] = '\0';
		str[i] = s[i];
		i++;
	}
	lineSort(str, i);
	printLines(str, i);
	

	return 0;
}