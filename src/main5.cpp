#include <stdio.h>
#define N 30
#define M 128

int main()
{
	char names[N][M];
	int currentAge = 0, maxAge = 0, minAge = 256, relatives = 0;
	char *young;
	char *old;
	printf("Enter number of your relatives: ");
	scanf("%d", &relatives);

	for (int i = 0; i < relatives; i++)
	{
		printf("Enter name: ");
		scanf("%s", names[i]);
		printf("Enter age: ");
		scanf("%d", &currentAge);
		if (currentAge > maxAge)
		{
			maxAge = currentAge;
			old = names[i];
		}
		if (currentAge < minAge)
		{
			minAge = currentAge;
			young = names[i];
		}
	}
	printf("The youngest relative - %s (%d years old).\n", young, minAge);
	printf("The oldest relative - %s (%d years old).\n", old, maxAge);
	return 0;
}