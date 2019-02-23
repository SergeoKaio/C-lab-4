#include<string.h>

char * reverseWords(char *in, char *out)
{
	char *word[256];
	int i = 0;
	int j = 0;
	while (*in != '\0')
	{
		if (*in == ' ')
		{
			*in++;
			continue;
		}
		j = 0;
		word[i] = in;
		while (*in != ' '&&*in != '\0'&&*in != '\n')
		{
			*in++;
			j++;
		}
		if (*in == '\0' || *in == '\n')
		{
			word[i][j] = '\0';
			break;
		}
		word[i][j] = '\0';
		*in++;
		i++;
	}
	int a;
	j = 0;
	while (i >= 0)
	{
		for (a = 0; a < strlen(word[i]); a++)
			out[a + j] = word[i][a];
		out[a + j] = ' ';
		j += a + 1;
		i--;
	}
	out[j - 1] = '\0';
	return out;
}

