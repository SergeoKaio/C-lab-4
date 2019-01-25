#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"task3.h"
#define N 256

int main()
{
	char str[N] = { 0 };
	
	printf("Enter a string\n");
	fgets(str, N, stdin);

	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	if (isPalindrome(str) == 1)
		printf("String is a palindrome");
	else
		printf("String is not a palindrome");
	
	return 0;
}