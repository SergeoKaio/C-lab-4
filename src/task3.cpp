#include <string.h>

int isPalindrome(char *str)
{
	int len = 0, i, j, count =0;
	char *pbegin, *pend;
	len = strlen(str);
	pbegin = str;
	pend = &str[len - 1];

	for (i = 0, j = 0; i < len; i++, j++)
	{
		if (*(pbegin + i) == *(pend - j))
			count++;
	}
	if (count == len)
		return 1;
	else
		return 0;
}