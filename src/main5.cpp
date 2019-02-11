#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	char name[8][64] = {0};
	char *young=0, *old=0;
	int curAge = 0;
	int maxAge = 0;
	int minAge = 200;
	printf("Enter the number of people\n");
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		printf("Enter the name of people %d\n", i+1);
		scanf("%s", &name[i]);
		printf("Enter the age of people %d\n", i+1);
		scanf("%d", &curAge);
		if (curAge >= maxAge)
		{
			maxAge = curAge;
			old = name[i];
		}
		if (curAge <= minAge)
		{
			minAge = curAge;
			young = name[i];
		}
	}
	printf("The oldest people %s, %d years\n", old, maxAge);
	printf("The youngest people %s, %d years\n", young, minAge);

	return 0;
}