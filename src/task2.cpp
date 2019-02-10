#include <stdio.h>
#include <string.h>
#define WORDS 50

char * reverseWords(char * in, char *out)
{
	int i = 0, j = 0, count = 0;
	char *word_pointer[WORDS] = { NULL };

	while(in[i] != '\0') // передаем в массив символов адреса первых символов каждого слова
	{
		if (in[i] != ' ' && in[i] != '\0')
		{
			*(word_pointer+count) = &in[i];
			count++;
			while (in[i] != ' ' && in[i] != '\0')
				i++;
			i--;
		}
		i++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		char *p = word_pointer[i];
		while (*p && *p != ' ')
			out[j++] = *p++;
		out[j++] = ' ';
	}
	out[--j] = '\0';
	return out;
}