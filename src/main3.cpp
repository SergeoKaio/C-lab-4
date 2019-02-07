#include <stdio.h>
#define N 255
#include "task3.h"
int main()
{
	char str[N];
	fgets(str, N, stdin);
	if (isPalindrome(str) == 0)
		printf("str - polindrom");
	else printf("str - ne polindrom");
	return 0;
}