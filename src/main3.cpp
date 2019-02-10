#include <stdio.h>
#include <string.h>
#include "task3.h"
#define N 256

int main()
{
	char str[N]; // исходная строка
	fgets(str, N, stdin);

	if (str[strlen(str) - 1] == '\n') // убираем \n в конце строки
		str[strlen(str) - 1] = '\0';

	if (isPalindrome(str) == 0)
		printf("Your string isn't palindrome");
	else if (isPalindrome(str) == 1)
		printf("Your string is palindrome");
	return 0;
}