#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
	char str[64]="madamimadam";
	
	printf("String is: %s\n", str);

	printf("Is palindrome?  %d", isPalindrome(str));


	return 0;
}

