#include <string.h>

char * reverseWords(char * in, char *out)
{
	char *words[100];
	int i = 0;
	int j = 0;
	while (*in!= '\0')
	{
		if (*in == ' ')
		{
			*in++;
			continue;
		}
		
		j = 0;
		words[i] = in;
		while (*in != ' '&&*in!='\0'&&*in!='\n')
		{
			*in++;
			j++;
		
		}
		if (*in == '\0'||*in=='\n')
		{
			words[i][j] = '\0';
			break;
		}
		words[i][j] = '\0';
		*in++;
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