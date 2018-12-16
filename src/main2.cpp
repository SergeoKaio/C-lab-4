#include <stdio.h>
#include "task2.h"

int main()
{
	char *in;
	char out[100];
	char str[1000],word[100];
	int i,j;
	fgets(str, 256, stdin);
	i = 0;
	j = 0;
	while (str[i]!='\n')
	{
		while (str[i] == ' ')
		{
			printf(" ");
			i++;
			continue;
		}
		while (str[i] != ' '&&str[i] != '\n')
		{
			word[j] = str[i];
			i++;
			j++;
		}
		word[j] = '\0';
		in = &word[0];
		j = 0;
		printf("%s", reverseWords(in, out));
	}
	return 0;
}