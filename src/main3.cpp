#include <stdio.h>
#include "task3.h"


int main(void)
{
	char str[256];
	fgets(str, 256, stdin);
		
	if (isPalindrome(str)==1)
		printf("It is palindrome");
	else printf("It is not palindrome");

	getchar();
	return 0;
}