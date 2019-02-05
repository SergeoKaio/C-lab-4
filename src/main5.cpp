#include <stdio.h>
#define N 10
#define M 100

int main()
{
	int i=0,n=0, age=0, maxage=0, minage=100;
	char name[N][M];
	char *young, *old;
	printf("Please, enter number of relatives: ");
	scanf("%d", &n);
	while (i < n)
	{
		printf("Please, enter name of relatives: ");
		scanf("%s", name[i]);
		printf("Please, enter age of relatives: ");
		scanf("%d", &age);
		if (age > maxage)
		{
			old = name[i];
			maxage = age;
		}
		else
			if (age<minage)
		{
			young = name[i];
			minage = age;
		}
		i++;
	}
	printf("Old - %s\nYoung - %s\n", old, young);

	return 0;
}