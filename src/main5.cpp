#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



int main(void)
{
	char name[10][100];
	char *young = name [1];
	char *old = name [1];
	int lvl = 0;
	int minlvl = 150;
	int maxlvl = 0;
	int i = 0;

	printf("Press name and age\n");
	while (*fgets(name[i], 100, stdin) != '\n')
	{
		scanf("%d", &lvl);
		if (minlvl > lvl)
			minlvl = lvl, young = name[i];
		if (maxlvl < lvl)
			maxlvl = lvl, old = name[i];
		while (getchar() != '\n');
		printf("Press name and age\n");
		++i;
	}
	
	printf("Youngest is %sand eldest is %s", young, old);
	
	getchar();
	return 0;
}