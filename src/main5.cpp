#define FAMILY_SIZE 10
#define NAME_SIZE 256
#include <stdio.h>

int main()
{
	int currentAge, oldest = 0, youngest = 200, size;
	char *young = NULL, *old = NULL;
	char family[FAMILY_SIZE][NAME_SIZE] = { 0 };
	printf("Input number of your relatives: ");
	scanf("%d", &size);
	printf("Input name and age of %d your relatives in format: 'NAME AGE'\n", size);
	for (int i = 0; i < size; i++)
	{
		scanf("%s %d", family[i], &currentAge);
		if (currentAge > oldest)
		{
			old = family[i];
			oldest = currentAge;
		}
		if (currentAge < youngest)
		{
			young = family[i];
			youngest = currentAge;
		}
	}
	printf("The youngest: %s\nHis/Her age: %d\n", young, youngest);
	printf("The oldest: %s\nHis/Her age: %d\n", old, oldest);
	return 0;
}