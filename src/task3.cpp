#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task3.h"
#define YES 1
#define NO 0

int isPalindrome(char * str) // функци€, провер€юща€ str(ответ либо 0, либо 1)
{
	int palindrome = YES;
	int len = strlen(str);
	char * start = str;
	char * end = &str[len - 1];

	while (start < end)
	{
		if (*start == *end)
		{
			start++;
			end--;
		}
		else
		{
			palindrome = NO;
			break;
		}
	}


	return palindrome;
}