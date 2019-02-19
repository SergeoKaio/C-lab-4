#include "task4.h"

void printLinesToFile(const char *str[], int size, FILE *fp) {
	fprintf(fp, "\nAfter sorting\n");
	for (int i = 0; i < size; i++)
		fputs(str[i], fp);
}