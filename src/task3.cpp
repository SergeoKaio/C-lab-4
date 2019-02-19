#include "task3.h"

int isPalindrome(char * str) {
	int end = 0;
	
	end = strlen(str);
	for (int i = 0; i < end; i++)
		if (str[i] != str[end - 1 - i])
			return 0;
	return 1;
}