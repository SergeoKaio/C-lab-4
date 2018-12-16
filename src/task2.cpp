#include <string.h>

char * reverseWords(char * in, char *out)
{
	char *out1;
	int i;
	for (i = 0; i < strlen(in); i++)
		out[i] = in[strlen(in) - i - 1];
	out[i] = '\0';
	out1 = &out[0];
	return out;
}