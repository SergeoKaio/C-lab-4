#include <string.h>

int isPalindrome(char * str)
{
	int start = 0, end = strlen(str) - 1;
	while(str[end]=='\n')
		end--;
	while (start <= end)
	{
		if (str[start] == str[end])
		{
			start++;
			end--;
		}
		else return 1;
	}
	return 0;
}