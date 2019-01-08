#include <string.h>
#include <stdio.h>

char * reverseWords(char * in, char *out)
{
	int len = strlen(in);
	if (in[len - 1] == '\n')
		in[len - 1] = '\0';
	out[strlen(in)] = '\0';

	char *x = in;
	int l=0, y = strlen(in), i = 0;
	out = &out[strlen(in)];

	while (l <= y)
	{
		if (*in == ' ')
		{
			i = in - x;
			while (i > 0)
			{
				*(out - i) = *(in - i);
				i--;
			}
			i = in - x;
			x = x + i + 1;
			out = out - i - 1;
			*out = ' ';
		}
		if (*in == '\0')
		{
			i = in - x;
			while (i > 0)
			{
				*(out - i) = *(in - i);
				i--;
			}
		}

		in++, l++;
	}

	return out;
}
