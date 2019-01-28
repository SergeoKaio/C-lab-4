#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include "task3.h"

int main()
{
	char str[100];
	int k;
	fgets(str, 100, stdin);
	if (isPalindrome(str)==1)
		printf("Polindrom");
	else printf("No Polindrom");
	scanf("%d", &k);
	return 0;
}
