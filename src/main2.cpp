
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task2.h"
#define SIZE 256
int main()
{
	char in[SIZE] = { 0 };
	char out[SIZE] = { 0 };
	printf("Enter a string:\n");
	fgets(in, SIZE, stdin);
	if (in[strlen(in) - 1] == '\n')
	
		in[strlen(in) - 1] = '\0';
	
	
	printf("%s\n", reverseWords(in, out));
    
    return 0;

}
