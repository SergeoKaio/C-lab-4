#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 30
#define M 128
#include <locale>

int main()
{
	char names[N][M];
	int currentAge = 0, maxAge = 0, minAge = 256, relatives = 0;
	char *young;
	char *old;
	setlocale(LC_ALL, "Rus");
	printf("Введите колличество ваших родственников: ");
	scanf("%d", &relatives);

	for (int i = 0; i < relatives; i++)
	{
		printf("Ведите его(ее) имя: ");
		scanf("%s", names[i]);
		printf("Ведите его(ее) возраст: ");
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
	printf("Самый младший родственник - %s (%d years old).\n", young, minAge);
	printf("Самый старший родственник - %s (%d years old).\n", old, maxAge);
	return 0;
}