#include <string.h>

int isPalindrome(char * str) {
	char * start = str;
	char * end = str + strlen(str) - 1;

	for (; start < end; start++, end--) 
	{

		if (*start != *end) 
		{ 

			return 0;
		}
	}
	return 1;
};