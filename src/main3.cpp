#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	char str[SIZE] = { 0 };
	printf("Enter a string:\n");
	fgets(str, SIZE, stdin);
	printf("This string is %sa pallindrome", (isPalindrome(str)) ? ("") : ("not "));
	printf("\n");
	return 0;
}