#include "task3.h"

int isPalindrome(char * str)
{
	char *right = str, *left = str + strlen(str) - 1;
	int i = 0, j = strlen(str);
	while (right <= left)
	{
		while (*right == ' ')
		{
			right++;
		}
		while (*left == ' ')
		{
			left--;
		}
		if (*right != *left)
			return 0;
		right++;
		left--;
	}
	return 1;
}