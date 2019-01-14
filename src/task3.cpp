#include <string.h>
#include "task3.h"

int isPalindrome(char * str)
{
	char * start = str;
	int length = strlen(str);
	char * end = (str + strlen(str) - 2);
	int result = 1;
	for (; start < end; start++, end--)
	{
		if (*start != *end)
		{
			result = 0;
			break;
		}			
	}
	return result;
}