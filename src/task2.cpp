#include <stdio.h>
#include <string.h>
#define M 128

char * reverseWords(char * in, char *out)

{
    if(in[strlen(in) - 1] == '\n')
        in[strlen(in) - 1] = 0;

    char *index[M];
    int i = 0;
    index[i] = strtok(in, " ");        //с помощью strtok определяем в строке (к-я лежит в массиве in) лексемы(слова), маркер лексемы пробел
    while(index[i] != NULL)                //пока есть лексемы
    {
        index[++i] = strtok(NULL, " ");
    }
    while(i > 0)
    {
        printf("%s ", index[--i]);
    }
    return out;
}
