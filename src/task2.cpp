#include "task2.h"

char * reverseWords(char * in, char *out)
{
	char *pointers[SIZE] = { 0 };
	int count = 0, inWord = 0;
	for (int i = 0; in[i]; i++)
	{
		if (in[i] != ' ' || !in[i + 1])
		{
			if (!inWord)
			{
			inWord = 1;
			pointers[count++] = in + i;
			}
		}
		else inWord = 0;
	}
	int t = 0;
	for (int i = count - 1; i >= 0; i--)
	{
		int j = 0;
		while (pointers[i][j] != ' ' && pointers[i][j])
		{
			out[t++] = pointers[i][j];
			j++;
		}
		out[t++] = ' ';
	}
	out[t] = '\0';
	return out;
}