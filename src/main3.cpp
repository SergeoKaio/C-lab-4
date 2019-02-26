#include <stdio.h>
#include <string.h>
#include "task3.h"
#define N 256
#include <locale>

int main()
{
	char str[N]; 
	fgets(str, N, stdin);
	setlocale(LC_ALL, "Rus");

	if (str[strlen(str) - 1] == '\n') 
		str[strlen(str) - 1] = '\0';

	if (isPalindrome(str) == 0)
		printf("Ваша строка не палиндром");
	else if (isPalindrome(str) == 1)
		printf("Ваша строка палиндром");
	return 0;
}