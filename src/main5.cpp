#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int main()
{
	char names[SIZE][SIZE] = { 0 };//массив строк для хранения имен
	int amount = 0;//the amount of relatives in the family
	int age = 0;//the age of the current relative
	int oldest = 0;
	int youngest = 1000;
	char * old = &names[0][0];
	char * young = &names[0][0];
	printf("Enter the amount of relatives:\n");
	scanf("%d", &amount);
	for (int i = 0; i < amount; i++)
	{
		printf("Enter the name of %d relative:\n", (i + 1));
		scanf("%s", names[i]);
		printf("Enter the age of %d relative:\n", (i + 1));
		scanf("%d", &age);
		if (age > oldest)
		{
			oldest = age;
			old = &names[i][0];
		}
		if (age < youngest)
		{
			youngest = age;
			young = &names[i][0];
		}
	}
	printf("\nThe oldest relative is %s with the age %d\n", old, oldest);
	printf("The youngest relative is %s with the age %d\n", young, youngest);
	return 0;
}