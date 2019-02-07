#include <stdio.h>
void printLinesToFile(const char *str[], int size, FILE *fp)
{
	fp = fopen("result.txt", "w");
	int i = 0;
	while (i < size)
	{
		fputs(str[i], fp); // записать строку в файл
		i++;

	}
	fclose(fp);
}