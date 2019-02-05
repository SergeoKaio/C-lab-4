#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10
#define M 50

void clean_stdin()          //clean buf stdin
{
	int c;
	do
		c = getchar();
	while (c != '\n' && c != EOF);
}


int main()
{
	char names[N][M];
	char *young;
	char *old;
	int count = 0;
	int age = 0;
	int maxAge = 0, minAge = 0;

	printf("Enter a number of your relatives: ");
	scanf("%d", &count);
	clean_stdin();

	printf("Enter the name of a relative:\n");
	fgets(names[0], M, stdin);

	while (1)
	{
		printf("Enter the age of this relative:\n");
		int result = scanf("%d", &age);
		if (result == 0 || age < 0 || age >120)
		{
			printf("The age is incorrect!\n");
			clean_stdin();
		}
		else
			break;
	}

	clean_stdin();
	maxAge = age;
	old = names[0];
	minAge = age;
	young = names[0];
	
	for (int i = 1;count > 1;i++, count--)
	{
		printf("Enter the name of a relative:\n");
		fgets(names[i], M, stdin);
		
		while (1)
		{
			printf("Enter the age of this relative:\n");
			int result = scanf("%d", &age);
			if (result == 0 || age < 0 || age >120)
			{
				printf("The age is incorrect!\n");
				clean_stdin();
			}
			else
				break;
		}

		clean_stdin();

		if (age > maxAge)
		{
			maxAge = age;
			old = names[i];
		}
		else if (age < minAge)
		{
			minAge = age;
			young = names[i];
		}
	}

	printf("The oldest relative is: %s", old);
	printf("His age is %d\n", maxAge);
	printf("The youngest relative is: %s", young);
	printf("His age is %d\n", minAge);
	return 0;
}
