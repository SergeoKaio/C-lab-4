#include <stdio.h>
#include <string.h>
#include "task3.h"
#define N 200

int main(void) {

	char str[N] = { 0 };
	printf("Enter a string:\n");
	fgets(str, N, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	if (isPalindrome(str) == 1)
		printf("%s - This string is Palindrom\n", str);
	else if (isPalindrome(str) == 0)
		printf("%s - This string is not Palindrom\n", str);

	return 0;
}