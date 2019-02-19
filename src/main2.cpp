#include <stdio.h>
#include "task2.h"


int main(void)
{
	char in[256];
	char out[256];
	printf("Enter text: ");
	fgets(in, 256, stdin);

	
	reverseWords(in, out);

	printf("In reverse order: %s\n", out);
	printf("Click Enter!");
	getchar();
	return 0;
}