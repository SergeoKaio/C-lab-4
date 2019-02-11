#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "task2.h"

int main()
{
	char in[64];
	char out[64];
	printf("Enter a string\n");
	fgets(in, 64, stdin);
	printf("String is: %s\n", in);

	reverseWords(in, out);
	printf("Reverse string is: %s\n", out);

		   	
	return 0;
}

