#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 256
#define inWord 1
#define outWord 0

char * reverseWords(char * in, char *out)
{
	char  *pointers[SIZE] = { 0 };
	int j = 0;
	int word=outWord ;
	int i = 0;
	while (i < strlen(in))
	{
		if (in[i] != ' ' && word ==outWord)
		{
			pointers[j] = &in[i];
			i++;
			j++;
			word = inWord;
		}
		else if (in[i] = ' ' && word==inWord)
		{
			word = outWord;
			i++;
		}
		else
			i++;
	}
	i = 0;
	j--;
	while (j >= 0)
	{
		while (*pointers[j]&& *pointers[j] != ' ')
		{
			out[i] = *pointers[j];
			i++;
			*pointers[j]++;
		}
		out[i] = ' ';
		i++;
		j--;
	}
	out[i-1] = '\0';
	return out;
}