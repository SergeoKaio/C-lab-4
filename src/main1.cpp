#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "task1.h"

int main ()
{
	char buf[6][256];
	printf("Enter are strings\n");
	for (int i = 0; i < 6;i++)
	{
		fgets(buf[i], 256, stdin);
	}
	char *p[] = {buf[0], buf[1], buf[2], buf[3], buf[4], buf[5]};
	lineSort(p, 6);
	printf("New\n");
	printLines((const char**)p, 6);

	return 0;
}