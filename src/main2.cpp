#include <stdio.h>
#include "task2.h"

int main()
{
	char in[100];
	char out[100];
	fgets(in, 256, stdin);
	reverseWords(in, out);
	printf("%s", out);
	return 0;
}