#define _CRT_SECURE_NO_WARNINGS

#include "task1.h"
#include "task4.h"
#include <string.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
	char buf[6][256];
	if (argc < 3)   // ошибка если не хватает аргументов
	{
		printf("Wrong format\n");
		return -2;
	}

	FILE *fr = fopen(argv[1], "rt"); //открывать файл на чтение
	if (!fr)
	{
		printf("Cannot open %s\n", argv[1]);
		return -1;
	}
	int i = 0;
	while (!feof(fr)) //читаем файл и записываем в буфер
	{
		fscanf(fr, "%s\n", buf[i]);
		i++;		
	}

	fclose(fr); //закрыли поток
	char * p[] = { buf[0],buf[1], buf[2], buf[3], buf[4],buf[5] };
	lineSort(p, 6); //делаем сортировку

	FILE *fr1 = fopen(argv[2], "wt"); //открыть файл на запись
	if (!fr)
	{
		printf("Cannot open %s\n", argv[2]);
		return -3;
	}
	printLinesToFile((const char**)p, 6, fr1); // записываем в файл
	fclose(fr1); //закрыли поток   

	return 0;
}