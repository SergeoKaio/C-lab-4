#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 256


char * reverseWords(char *in, char *out)
{
	char *p[N] = { 0 };

	int i = 0;
	int inWord = 0;
	int count = 0;

	while (in[i])
	{
		if (in[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			p[count] = &in[i];
			count++;
		}
		else if (in[i] == ' ' && inWord == 1)
			inWord = 0;
		i++;
	}

	for (int j = 0;count - 1 >= 0;count--)
	{
		while (*p[count - 1] != ' ' && *p[count - 1] != '\0')
		{
			out[j] = *p[count - 1];
			j++;
			*p[count - 1]++;
		}
		if (count - 1 > 0)
			out[j++] = ' ';
	}
	out[strlen(in)] = '\0';

	return out;
}