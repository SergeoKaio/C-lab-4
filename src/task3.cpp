#include <string.h>

int isPalindrome(char * str)
{
	int len = strlen(str);
	if (str[len - 1] == '\n')
		str[len - 1] = '\0';
	
	char *end = &str[strlen(str)-1];
	
	while (str < end)
	{
		if (*str == *end)
			str++, end--;
		else return 0;
	}

	return 1;
}

