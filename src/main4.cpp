/*   Написать программу, сортирующую строки (см. задачу 1), но использующую
   строки, прочитанные из текстового файла. Результат работы программы также
   записывается в файл.*/

#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include "task4.h"

int main() {
	char str[LINES][WORDS];
	char * index[LINES];
	FILE *fp;


	puts("We use File: \"Lb4_text.txt\"");
	fp = fopen("Lb4_text.txt", "a+");											//Открытие тестового файла в корневом каталоге
	fp == NULL ? puts("Opening is failed") : puts("Opening is successful");
	
	int line = 0;
	while (fgets(str[line], WORDS, fp) != NULL) {
		index[line] = str[line];
		line++;
	}
	  	
	lineSort(index, line);														//Сортировка строк и сохранение их в файл
	printLinesToFile((const char**)index, line, fp);							//Сохранение отсортированных строк в тот же файл
	fclose(fp) == EOF ? puts("File \"Lb4_text.txt\" is not closed") : puts("File \"Lb4_text.txt\" is closed");
	return 0;
}