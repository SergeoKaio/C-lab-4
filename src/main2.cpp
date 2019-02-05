#include <stdio.h>
#include "task2.h"


int main(void)
{
	char in[256];
	char out[256];
	
	fgets(in, 256, stdin);
	

	reverseWords(in, out);

	printf("%s", out);

	getchar();
	return 0;
}