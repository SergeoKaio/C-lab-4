#include <stdio.h>

int main()
{
	char name[10][100];
	int curage = 0, youngage = 1000, oldage = 0;
	char *young, *old;
	int i, n;
	puts("How many relatives : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		puts("Name :");
		scanf("%s",name[i]);
		puts("Age : ");
		scanf("%d", &curage);
		if (curage < youngage)
		{
			youngage = curage;
			young = &name[i][0];
		}
		if (curage > oldage)
		{
			oldage = curage;
			old = &name[i][0];
		}
	}
	puts("Oldest:");
	puts(old);
	puts("Youngest:");
	puts(young);

	return 0;
}