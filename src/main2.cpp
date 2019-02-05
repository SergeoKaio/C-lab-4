#include "task2.h"

int main()
{
	char strIn[SIZE] = { 0 }, strOut[SIZE] = { 0 };
	printf("Just write some words: ");
	gets(strIn);
	reverseWords(strIn, strOut);
	puts(strOut);
	return 0;
}