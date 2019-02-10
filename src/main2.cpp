#include <stdio.h>
#include <string.h>
#include "task2.h"
#define N 256

int main()
{
	char in[N]; // исходная строка
	char out[N]; // строка in c обратным порядком слов
	fgets(in, N, stdin);

	if (in[strlen(in) - 1] == '\n') // убираем \n в конце строки
		in[strlen(in) - 1] = '\0';

	printf("%s", reverseWords(in, out));
	return 0;
}