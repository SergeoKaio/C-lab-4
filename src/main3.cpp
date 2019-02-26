#include <stdio.h>
#include <string.h>
#include "task3.h"

#define N 256

int main()

{
	char buf[N];
	printf("Entered string:\n");
	fgets(buf, N, stdin);

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	if (isPalindrome(buf) == 1)
		printf("String %s  polindrom\n", buf);
	else
		printf("String %s ne polindrom\n", buf);
	return 0;
}