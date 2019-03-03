#include <stdio.h>
#include<string.h>
#include "task3.h"
#define sLMax 201 // max length of string

int main()
{
	char str[sLMax];
	printf("Enter the string (no more than %d characters): ", sLMax - 1);
	fgets(str, sLMax, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	printf("This string is%spalindrome", isPalindrome(str) ? " " : "n\'t ");
	putchar('\n');
	return 0;
}