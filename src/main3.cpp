#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
	char input[200];
	char *str;
	fgets(input, 256, stdin);
	str = &input[0];
	str[strlen(str) - 1] = '\0';
	if (isPalindrome(str))
		puts("true");
	else
		puts("false");
	printf("%d",isPalindrome(str));

	return 0;
}