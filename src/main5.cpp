/*
	Ќаписать программу, котора€ запрашивает количество родственников в семье,
	а потом позвол€ет ввести им€ родственника и его возраст. ѕрограмма должна
	определить самого молодого и самого старого родственника и вывести их имена
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define M 20

int main()
{
	int number;  
	
	printf("Please, enter the number of relatives in the family: ");
	scanf("%d", &number);



	char **names;  	 
				   //names = (char*)calloc(50*number, sizeof(char));  

				   //char names[*n][50];

				   
	names = (char**)malloc(number * sizeof(char*));


	for (int i = 0; i < number; i++)  
	{
		names[i] = (char*)malloc(M * sizeof(char));
	}

	char *young = NULL;
	char *old = NULL;

	int age = 0;
	int maxAge = 50;
	int minAge = 50;

	printf("\nEnter the name of your relative and his/her age.\n"
		"Please, do it in format: Name age. \n"
		"For example: Ann 25 \n\n");

	for (int i = 1, j = 0; i <= number; i++, j++)
	{
		printf("Your %d relative:  ", i);
		scanf("%s %d", names[j], &age);
		printf("\n");
		
		if (age > maxAge)
		{
			maxAge = age;
			old = names[j];
		}
		if (age < minAge)
		{
			minAge = age;
			young = names[j];
		}
	}


	printf("The youngest relative is %s. ", young);
	printf("He/she is %d years old. \n", minAge);


	printf("The oldest relative is %s. ", old);
	printf("He/she is %d years old. \n\n", maxAge);

	
	for (int i = 0; i < number; i++)  
		free(names[i]);   
	free(names);
	return 0;
}