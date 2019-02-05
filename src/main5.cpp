#include <stdio.h>

int main()
{
	int max = 0, min = 0, curent = 0, number = 0, i = 0;
	char name[100][20];
	char *young, *old;
	printf("Enter number of your relatives: \n");
	scanf("%d", &number);
	while (i < number)
	{
		printf("Enter name of relatives:\n");
		scanf("%s", name[i]);
		printf("Enter age of relatives:\n");
		scanf("%d", &curent);
		if (max == 0)
		{
			max = curent;
			min = curent;
			old = name[i];
			young = name[i];
			i++;
		}
		if (curent > max)
		{
			max = curent;
			old = name[i];
			i++;
		}
		else if(curent < min)
		{
			min = curent;
			young = name[i];
			i++;
		}
	}
	printf("Old - %s\nYoung - %s\n", old, young);
	
	

	return 0;
}