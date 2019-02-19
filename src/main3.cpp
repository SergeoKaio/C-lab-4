#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task3.h"
#define N 256

int main()
{
	char str[N];

	printf("Type a string so i checked it on a palindrome:\n");
	fgets(str, N, stdin);

	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	if (isPalindrome(str) == 1)
		printf("That is a palindrome!\n");
	else
		printf("That is not a palindrome!\n");

	return 0;
}