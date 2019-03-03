#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"task2.h"
#define N 200

int main()
{
	char in[N] = { 0 }, out[N] = { 0 };

	printf("Enter a string:\n");
	fgets(in, N, stdin);

	if (in[strlen(in) - 1] == '\n')
		in[strlen(in) - 1] = '\0';

	printf(reverseWords(in, out));

	return 0;
}