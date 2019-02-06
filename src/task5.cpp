#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME 30

int main()
{
	int size_family = 0;
	printf("How many people in your family?\n");
	scanf("%d", &size_family);
	char **names = (char**)malloc(size_family * sizeof(char*));
	for (int i = 0; i < size_family; i++)
		names[i] = (char*)malloc(MAX_NAME * sizeof(char));
	char *old, *young;
	int Age = 0, maxAge = 0, minAge = 100;
	int i = 0;
	while (i<size_family)
	{
		printf("Enter name and age: ");
		//scanf("%s %d", &names[size_family], &Age);
		//fgets(names[i], MAX_NAME, stdin);
		/*scanf("%s", names[i]);
		printf("Enter age: ");
		scanf("%d", &Age);*/
		scanf("%s %d", names[i], &Age);
		if (Age > maxAge)
		{
			maxAge = Age;
			old = names[i];
		}
		if (Age < minAge)
		{
			minAge = Age;
			young = names[i];
		}
		i++;

	}
	printf("young:\t%s\t%d\nold:\t%s\t%d", young, minAge, old, maxAge);
	return 0;
}