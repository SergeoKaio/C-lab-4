#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 256

char * reverseWords(char *in, char *out){
    
    char * p [SIZE] = { 0 }; // массив указателей в котором будут храниться адреса первых символов слов массива char in[]
    int count = 0; // счетчик слов
    int inWord = 0; // флаг: 1 - в слове, 0 - не в слове;
    int i = 0; // для массива in
    int m = 0; // для массива  щге
    while (in[i] != '\0'){
        if (inWord == 0 && in[i] != ' '){
            inWord = 1;
            p[count] = &in[i];
            count++;
            
        }
        if (in[i] == ' '){
            inWord = 0;
        }
        i++;
    }
   
    count--; // уменьшаем на 1 для работы внутри массива, т.к. первый элемент массива имеет индекс 0
    while(count >= 0){
        while(*p[count] && *p[count] != ' '){
            out[m] = *p[count];
            m++;
            *p[count]++;
        }
        out[m] = ' ';
        m++;
        count--;
    }
    
    out[strlen(out)-1] = '\0';
    
    return out;
}
