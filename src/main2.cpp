#include <stdio.h>
#include <string.h>
#include "task2.h"
#define sLMax 201 // max length of string

int main()
{
	char in[sLMax];
	char out[sLMax];
	printf("Enter the string you want to reverse (no more than %d characters):\n", sLMax - 1);
	fgets(in, sLMax, stdin);
	if (in[strlen(in) - 1] == '\n')
		in[strlen(in) - 1] = '\0';
	printf("old string: \"%s\"\n", in);
	printf("new string: \"%s\"\n", reverseWords(in, out));
	return 0;
}