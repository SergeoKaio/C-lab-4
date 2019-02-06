#include <string.h>
char * reverseWords(char * in, char *out)
{
	//int start = 0, end = strlen(in)-2;
	//while (end>=0)
	//{
	//	out[start] = in[end];
	//	start++;
	//	end--;
	//}
	////out[start] = in[end];
	////start++;
	//out[start]='\0';
	int i = strlen(in) - 2, j = 0, k = 0;
	while (i >= 0)
	{
		if (in[i] == ' ' || in[i] == '\n' || i == 0)
		{
			if (i == 0)
				j = i;
			else
				j = i + 1;

			while (in[j] != ' ' && in[j] != '\n' && in[j]!='\0')
			{
				out[k] = in[j];
				j++;
				k++;
			}
			out[k] = ' ';
			k++;
		}
		i--;
	}
	out[k] = '\0';
	return out;
}