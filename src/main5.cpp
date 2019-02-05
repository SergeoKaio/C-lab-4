#include <stdio.h>

#define M 256
#define N 20

int main()
{
	char buf[N][M];
	int n = 0, count = 0, age = 0, maxAge = 0, minAge = 0;
	char *young ;
	char *old ;
	printf("Enter the namber of relatives in the family: ");
	scanf("%d", &n);
	printf("Enter family member: ");
	scanf("%s", buf[count]);
	printf("Enter age: ");
	scanf("%d", &age);
	minAge = maxAge = age;
	young = old = buf[count];
	
	for(count = 1; count < n; count++ )
	{
		printf("Enter family member: ");
		scanf("%s", buf[count]);
		printf("Enter age: ");
		scanf("%d", &age);
		
		if (age < minAge)
		{
			minAge = age;
			young = buf[count];
		}

		if (age > maxAge)
		{
			maxAge = age;
			old = buf[count];
		}
		
	}

	printf("The oldest: %s  %d year\nThe youngest: %s  %d year", old, maxAge, young, minAge);

	return 0;
}