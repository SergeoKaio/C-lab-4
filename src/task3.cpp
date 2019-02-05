#include <stdio.h>
#include <string.h>
#include "task3.h"

int isPalindrome(char * str)
{
	
	char *start = str;
	int a = 0;
	char *end = str + strlen(str) - 1;
	for (; start < end; start++, end--)
	{
		if (*start != *end)
		{
			
			return 0;
			
		}
		
	}

	
	return 1;
}
