#include "task3.h"

int main()
{
	char str[SIZE] = {0};
	printf("Palindrome test: ");
	gets(str);
	if (isPalindrome(str))
		printf("It's a palindrome\n");
	else
		printf("It's not a palindrome\n");
	return 0;
}