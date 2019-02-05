#include<string.h>

int isPalindrome(char * str)
{
	int flag=1;
	char *a = str;
	char *b = &str[strlen(str) - 1];
	while (a<b)
	{
		if (*a == *b)
		{
			*a++, *b--;
		}
		else
		{
			flag = 0;
			break;
		}
		}
	return flag;
}