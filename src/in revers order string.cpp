/*
 "Элегантное" решение задачи на вывод последовательности слов в обратном порядке (слова - последовательность символов)
 
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task2.h"
#define SIZE 1000

int main(){
    char in[SIZE] = { 0 };
    char * out[SIZE] = { 0 }; // массив указателей
    int inWord = 0; // флаг начала слова
    int count = 0; // счетчик слов
    
    printf("Enter some word\n");
    fgets(in, SIZE, stdin);
    //заменяем последний символ строки на \0
    if(in[strlen(in)-1] == '\n')
        in[strlen(in)-1] = '\0';
    // финт ушами: печатаем массив через указатель, соданный для цикла
    printf("String in your order:\t");
    for(char *p_in = in; *p_in != '\0'; p_in++)
        printf("%c", *p_in);
    printf("\n");
    
    printf("String in reverse mod:\n");
    
    for(int i = 0; in[i] != '\0'; i++){ // алгоритм конечного автомата
        if ((in[i] >= 'A' && in[i] <= 'Z')
            || (in[i] >= 'a' && in[i] <= 'z')
            || (in[i] >= '0' && in[i] <= '9')){
            if(!inWord){ // inWord == 0;
                inWord = 1;
                out[count] = &in[i];
                count++;
            }
        }
        else {
            inWord = 0;
        }
    }
    for (int i = count - 1; i >= 0; i--){
        int j = 0;
        while(out[i][j] && out[i][j] != ' '){
            printf("%c", out[i][j]);
            j++;
        }
        printf(" ");
    }
    printf("\n");
    
    
    
    return 0;
}
