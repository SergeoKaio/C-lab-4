#include <string.h>
#include <stdlib.h>
#include <string>
#include "task1.h"
using namespace std;

int main()
{
	int i,j;
	
	char s[100][100];
	char *str[100];
	char out;

	i = 0;
	
	while (*fgets(s[i], 256, stdin) != '\n')
	{
		s[i][strlen(s[i])-1] = '\0';
		str[i] = s[i];
		i++;
	}
	lineSort(str, i);
	printLines(str, i);

	return 0;
}