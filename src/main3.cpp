#include <stdio.h>
#include "task3.h"

int main()
{
	char input[200];
	char *str;
	fgets(input, 256, stdin);
	str = &input[0];
	if (isPalindrome(str))
		puts("true");
	else
		puts("false");

	return 0;
}