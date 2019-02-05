#include <stdio.h>
#include <string.h>
#include "task3.h"

#define N 256

int main()
{
	char buf[N];
	printf("Enter the string:\n");
	fgets(buf, N, stdin);

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	if (isPalindrome(buf) == 1)
		printf("String \"%s\" is a polindrome", buf);
	else
		printf("String \"%s\" isn't a polindrome", buf);
	return 0;
}