#include <string.h>

int isPalindrome(char * str)
{
	int n = strlen(str)-1;
	char *begin;
	char *end;
	begin = &str[0];
	end = &str[n - 1];
	for (int i = 0; i < n / 2; i++)
		if (*begin != *end)
			return 0;
		else
		{
			*begin++;
			*end--;
		}
	return 1;
}