#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"

int main()
{
	printf("Enter a string:\n");
	char in[SIZE1] = { 0 };
	fgets(in, SIZE1, stdin);
	char out[SIZE1] = { 0 };

	reverseWords(in, out);
	puts(out);
	printf("\n");
	return 0;
}
