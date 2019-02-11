#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <string.h>
#include <stdio.h>

int isPalindrome(char * str)
{
	int a = 0;
	int b = strlen(str) - 1;

	for (int i = 0; i <= b/2; i++)
	{
		if (*(str + i) == *(str + b - i))
		{
			a = 1;
		}
		else
			a = 0;
	}
	
	return a;
}