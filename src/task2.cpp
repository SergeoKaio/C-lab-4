#include <string.h>
#define COUNT_WORDS_MAX 10

char * reverseWords(char * in, char *out)
{
	char *pArr[COUNT_WORDS_MAX] = { 0 };
	int length = strlen(in);
	int countWords = 0;
	if (length == 0)
	{
		*out = *in;
		return out;
	}

	for (int i = 0; i < length; i++)
	(*(in + i) != ' ' && *(in + i) != '\0' && (i == 0 || *(in + i - 1) == ' ')) ? *(pArr + countWords++) = in + i : 0;
	if (countWords == 0)
	{
		for (int i = 0; i < length; i++)
			*(out + i) = *(in + i);
		*(out + length) = '\0';
		return out;
	}

	char * pOut = out;
	for (int j = countWords - 1; j >= 0; j--)
	{
		for (int i = 0; *(*(pArr + j) + i) != ' ' && *(*(pArr + j) + i) != '\0'; i++)
			*pOut++ = *(*(pArr + j) + i);
		*pOut++ = ' ';
	}
	*--pOut = '\0';
	return out;
}