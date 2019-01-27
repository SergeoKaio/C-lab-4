#include<string.h>

int isPalindrome(char * str)
{
	int flag;
	char *a = str;
	char *b = &str[strlen(str) - 1];
	while (a<b)
	{
		if (*a == *b)
		{
			*a++, *b--;
			flag = 0;
		}
		else
		{
			flag = 1;
			break;
		}
		}
	return flag;
}