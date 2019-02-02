#include<string.h>
int isPalindrome(char * str)
{
	char *p1, *p2;
	p1 = str;
	p2 = str + strlen(str) - 1;
	while (p1 < p2)
	{
		if (*p1 == ' ')
		{
			p1++; continue;
		}
		if (*p2 == ' ')
		{
			p2--;
			continue;
		}
		if (*p1 != *p2)
			return 0;
		p1++; p2--;
	}
return 1;
}