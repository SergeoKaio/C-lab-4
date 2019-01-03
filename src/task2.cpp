#include <string.h>
//#include <stdio.h>
#include <ctype.h>
#include "task2.h"
#define IN 1
#define OUT 0


char * reverseWords(char *in, char *out)
{
	char *pstr[SIZE] = { NULL };
	
	int i = 0;
	int j = 0;
	int count = 0;
	int inWord = OUT;


	while (in[i])
	{
		
		if (!isspace(in[i]) && inWord == OUT)
		{
			inWord = IN;
			pstr[j++] = &in[i++];
			count++;
		}
		//i++;
		else if (isspace(in[i]) && inWord == IN)
		{
			inWord = OUT;
			i++;
		}
		else
			i++;
	}
	

	j = 0;
	for (i = count - 1; i >= 0; i--)
	{
		while (!isspace(*pstr[i]) && *pstr[i])
			out[j++] = *pstr[i]++;
		if (i > 0)
			out[j++] = ' ';
	}
	out[j++] = '\0';


	return out;
}