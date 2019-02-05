/*
	Написать программу, которая запрашивает строку и определяет, 
	не является	ли строка палиндромом 
	(одинаково читается и слева направо и справа налево)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"
#define SIZE 80

int main()
{
	char str[SIZE] = { 0 };

	printf("Please, enter the line: \n\n");
	fgets(str, SIZE, stdin);

	int len = strlen(str);
	if (str[len - 1] == '\n')
		str[len - 1] = '\0';

	if (isPalindrome(str))
		printf("\n""This srting is a palindrome. \n\n");
	else
		printf("\n""This srting is not a palindrome. \n\n");

	return 0;


}
