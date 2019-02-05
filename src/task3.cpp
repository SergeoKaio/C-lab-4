#include <cstring>
int isPalindrome(char * str)
{
	
	int count = strlen(str)-1;
	for (int i = 0; i <= count; i++)
	{
		if (str[i] == str[count])
		{
			count--;
		}
		else return 0;
	}
	return 1;
}