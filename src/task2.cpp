#include <string.h>
char * reverseWords(char * in, char *out)
{
	int i = strlen(in) - 2, j = 0, k = 0;
	while (i >= 0)
	{
		if (in[i] == ' ' || in[i] == '\n' || i == 0)
		{
			if (i == 0)
				j = i;
			else
				j = i + 1;

			while (in[j] != ' ' && in[j] != '\n' && in[j]!='\0')
			{
				out[k] = in[j];
				j++;
				k++;
			}
			out[k] = ' ';
			k++;
		}
		i--;
	}
	out[k-1] = '\0';
	return out;
}