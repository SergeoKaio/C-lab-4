#include <stdio.h>
#define N 255
#include "task2.h"
int main()
{
	char in[N], out[N];
	fgets(in, N, stdin);
	
	printf("------------\n");
	printf("%s\n%s", in, reverseWords(in, out));
	return 0;
}