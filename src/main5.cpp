/*программф, котора€ запрашивает количество родственников в семье,
   а потом позвол€ет ввести им€ родственника и его возраст. ѕрограмма должна
   определить самого молодого и самого старого родственника и вывести их имена
*/
#include <stdio.h>
#include <string.h>

int main()
{
	int age=0;//текущий возраст
	int maxAge=0;
	int minAge=100;
	char name[20][100] = { 0 };
	char *young;
	char *old;
	int amount = 0; int i = 0;
	printf("How many people in you family?\n");
	scanf("%d", &amount);
	for (int i = 0; i < amount; i++)
	{
		printf("Enter the name of the relative:\n");
		scanf("%s", name[i]);
		printf("Enter his/her age:\n");
		scanf("%d", &age);
		if (age < minAge)
		{
			minAge = age;
			young = &name[i][0];
		}
		if (age > maxAge)
		{
			maxAge = age;
			old = &name[i][0];
		}
	}
	printf("The oldest is %s\n", old);
	printf("The youngest is %s\n", young);
	
	return 0;
}