#include<stdio.h>
#include<string.h>
#define N 100

char * reverseWords(char * in, char *out)
{
	int i=0, j = 0;
	char *p[N] = { 0 };

	if (in[strlen(in) - 1] == '\n')
		in[strlen(in) - 1] = '\0';

	if (in[0] > 0)
		p[j] = &in[0];
	else
		j = -1;

	for (i = 0; in[i] != '\0'; i++)
	{
		if ((in[i] == ' ') && (in[i + 1] > 0))
			p[++j] = &in[i + 1];
	}
	i = 0;
	for (; j >= 0; j--)
	{
		while (*p[j]!=' ' && *p[j]!='\0')
			out[i++] = *p[j]++;
		out[i++] = ' ';
	}
	out[--i] = '\0';
	return out;
}