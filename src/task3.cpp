#include<string.h>

int isPalindrome(char * str)
{
	int a;
	char *arr = str;
	char *len = &str[strlen(str) - 2];
	while (arr<len)
	{
		if (*arr == *len)
		{
			arr++, len--;
			a = 0;
		}
			else
				a = 1;
		}
	return a;
}