/* Написать программу, которая запрашивает количество родственников в семье,
   а потом позволяет ввести имя родственника и его возраст. Программа должна
   определить самого молодого и самого старого родственника и вывести их имена.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define PEOPLES 32
#define NAME_LENGHT 128

int main() {
	char names[PEOPLES][NAME_LENGHT];
	char * young = names[0];
	char * old = names[0];
	int peoples = 0, years = 0, max_years = 0, min_years = 200;

	printf("Enter the numbers of people in your family: ");
	scanf("%d", &peoples);
	for (int i = 0; i < peoples; i++) {
		printf("\nEnter the name of %d people: ", i + 1);
		//fgets(names[i], NAME_LENGHT, stdin);
		scanf("%s", names[i]);
		printf("\nEnter %d person's age: ", i + 1);
		scanf("%d", &years);

		if (max_years <= years) {										//Проверка на max возраст
			max_years = years;
			old = names[i];
		}
		if (min_years >= years) {										//Проверка на min возраст
			min_years = years;
			young = names[i];
		}
	}
	printf("\nThe elder is %s. Age is %d ", old, max_years);
	printf("\nThe younger is %s. Age is %d ", young, min_years);
	return 0;
}