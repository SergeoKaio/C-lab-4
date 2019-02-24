/* Написать программу, которая запрашивает строку и определяет, не является
ли строка палиндромом (одинаково читается и слева направо и справа налево)*/

#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
	char input[256];
	char *str;
	printf("Enter a string:  ");
	fgets(input, 256, stdin);
	str = &input[0];
	str[strlen(str) - 1] = '\0';
	if (isPalindrome(str))
		printf("string is palindrome\n");
	else
		printf("string isn't palindrome\n");
	return isPalindrome(str);
}