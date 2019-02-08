#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.h"

int comp(const void *a, const void *b){ // компаратор для qsort
    // используем функцию strlen для определения длины строки
    return strlen(*(char**)a) - strlen(*(char**)b);
}

void lineSort(char *str[],int size){
    qsort(str, size, sizeof(char*), comp);
}

void printLines(const char *str[],int size){
    for (int i = 0; i < size; i++){
        printf("%s", str[i]);
        if (str[i][strlen(str[i])-1] != '\n')
            putchar('\n');
    }
}
