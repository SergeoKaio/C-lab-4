#include <string.h>
#include "task3.h"

int isPalindrome(char * str)
{
	char * start = str;
	if (str[strlen(str) - 1] == '\n')//избавляемся  \n чтоб не путаться
		str[strlen(str) - 1] = '\0';
	char * end = (str + strlen(str) - 1);
	int result = 1;
	for (; start < end; start++, end--)
	{
		if (*start != *end)
		{
			return 0;
			//break;
		}			
	}
	return 1;
}