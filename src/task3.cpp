#include <string.h>

int isPalindrome(char * str)
{
	int result = 1;
	char *start, *end;
	start = str;
	end = &str[strlen(str) - 1];

	while (start < end)
	{
		if (*start == *end)
		{
			*start++;
			*end--;
		}
		else
		{
			result = 0;
			break;
		}
	}

	return result;
}