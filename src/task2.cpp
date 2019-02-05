#include <stdio.h>
#include <cstring>
#include <stdlib.h>

char  buf[100][100];
int j = 0, i = 0, k = 0, r = 0;
char * reverseWords(char * in, char *out)
{
	while (in[j] != '\0')
	{
		while (in[j] != ' ' & in[j] != '\0')
		{
			buf[i][k] = in[j];
			j++;
			k++;
		}
		k = 0;
		i++;
		j++;
	}
	i--;
	while (j >= 0)
	{
		while (buf[i][k] != '\0')
		{
			out[r] = buf[i][k];
			r++;
			k++;
			j--;
		}
		k = 0;
		i--;
		out[r++] = ' ';
		j--;
	}
	out[r-2] = '\0';
	return 0;
}
