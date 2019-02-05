#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include "task2.h"
#define N 100

int main()
{
	char in[N] = { 0 }, out[N] = { 0 };
	printf("Enter a string:\n");
	fgets(in, N, stdin);
	puts (reverseWords(in, out));
	return 0;
}