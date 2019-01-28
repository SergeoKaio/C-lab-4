#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include "task2.h"
#define N 100

int main()
{
	int a = 0;
	char  in[N];
	char  out[N];
	fgets(in, N, stdin);
	reverseWords(in, out);
	puts(out);
	
	return 0;
}