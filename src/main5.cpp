#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 15
#define MAX_NUM_RELATIVES 20

int main()
{
	int numRel = 0;//number of relatives
	int minAge = 150, maxAge = 0, age = 0;
	char str[MAX_NUM_RELATIVES][MAX_NAME_LENGTH];
	char *young=0, *old=0;

	printf("How many relatives do you have? ");
	scanf("%d", &numRel);
	getchar();
	if (numRel <= 0 || numRel >= MAX_NUM_RELATIVES)
		printf("incorrect number, or you have too many relatives");
	
	for (int i = 0; i < numRel; i++)
	{
		printf("Enter the name of %d relative (of %d): ", i + 1, numRel);
		fgets(str[i], MAX_NAME_LENGTH, stdin);
			if (str[i][strlen(str[i]) - 1] == '\n')
			str[i][strlen(str[i]) - 1] = '\0';
		
		printf("How old is %s (years)? ", str[i]);
		scanf("%d", &age);
		getchar();

		if (age > maxAge)
		{
			maxAge = age;
			old = str[i];
		}
		if (age < minAge)
		{
			minAge = age;
			young = str[i];
		}
	}
		printf("%s is yours the youngest relative. He(She) is %d years old.\n", young, minAge);
		printf("%s is yours the oldest relative. He(She) is %d years old.\n", old, maxAge);
	return 0;
}
