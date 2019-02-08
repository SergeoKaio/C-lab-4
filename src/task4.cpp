#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task4.h"

void printLinesToFile(const char *str[],int size,FILE *fp){
    for (int i = 0; i < size; i++)
        fputs(str[i], fp);
}
