/*Ќаписать программу, котора€ позвол€ет пользователю ввести несколько 
строк с клавиатуры, а затем вывод€щую их в пор€дке возрастани€ длины строки.*/

#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"

int main() {
	char str[LINES][WORDS];
	char * index[LINES];
	int count = 0;
	char * temp;

	//*************************Enter str**************************
	printf("Enter %d lines (max %d letters per line) or press \"Enter\" to stop"
		"enter:\n", LINES, WORDS);

	for (int i = 0; i < LINES; i++) {
		temp = fgets(str[i], WORDS, stdin);
		int j = 0;
		if (temp) {
			while (str[count][j] != '\n' && str[count][j] != '\0')
				j++;
			if (str[count][j] == '\n')
				str[count][j] = '\0';
			else
				while (getchar() != '\n')
					continue;
		}
		if (str[count][0] == '\0')
			break;
		index[i] = str[i];
		count++;
	}
	
	//**********************Sorting and puts**********************
	lineSort(index, count);
	puts("After sorting:");
	printLines((const char**)index, WORDS);
	return 0;
}