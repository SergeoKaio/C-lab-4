#include <string.h>

char * reverseWords(char * in, char *out)
{
	char *words[100];
	int i = 0;
	int j = 0;
	while (*in!= '\n')
	{
		if (*in == ' '||*in=='\0')
		{
			*in++;
			continue;
		}
		
		j = 0;
		words[i] = in;
		while (*in != ' '&&*in!='\n')
		{
			*in++;
			j++;
		
		}
		if (*in == '\n')
		{
			words[i][j] = '\0';
			break;
		}
		words[i][j] = '\0';
		i++;
		
	}
	j = 0;
	int k;
	while (i >= 0)
	{
		for (k = 0; k < strlen(words[i]); k++)
			out[k + j] = words[i][k];
		out[k + j] = ' ';
		j += k + 1;
		i--;

	}
	out[j - 1] = '\0';
	
	return out;
}