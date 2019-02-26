#include <stdio.h>
#include <string.h>
#include "task2.h"
#define N 256

int main()
{
	char in[N]; 
	char out[N]; 
	fgets(in, N, stdin);

	if (in[strlen(in) - 1] == '\n') 
		in[strlen(in) - 1] = '\0';

	printf("%s", reverseWords(in, out));
	return 0;
}