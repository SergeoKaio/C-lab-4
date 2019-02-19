/*
 Задача №2
 
 Написать программу, которая с помощью массива указателей выводит слова
 строки в обратном порядке. Пример:
 "буря мглою небо кроет" -> "кроет небо мглою буря"
 Пояснение
 
 Для входной строки создается массив указателей на char, в который заносятся адреса первых символов каждого слова. Затем организуется новая строка, при использовании этого массива из указателей. Массив из указателей должен объявляться внутри функции reverseWords.
 
 Состав
 
 Программа должна состоять из функций:
 
 - char * reverseWords(char * in, char *out) - функция, переворачивающая слова из in и записывающую их в out
 - main() - организация ввода строки
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task2.h"
#define SIZE 1000

int main(void){
    char in[SIZE] = { 0 };
    char out[SIZE] = { 0 };

    printf("Enter some word\n");
    fgets(in, SIZE, stdin);
    if(in[strlen(in)-1] == '\n')
        in[strlen(in)-1] = '\0';
    // финт ушами: печатаем массив через указатель, созданный для цикла
    printf("String in your order:\t");
    for(char *p_in = in; *p_in != '\0'; p_in++)
        printf("%c", *p_in);
    printf("\n");
    
    printf("String in reverse mod:\n");
    printf("%s\n", reverseWords(in, out));

/*
    for(int i = 0; in[i] != '\0'; i++){ // алгоритм конечного автомата
        if ((in[i] >= 'A' && in[i] <= 'Z')
            || (in[i] >= 'a' && in[i] <= 'z')
            || (in[i] >= '0' && in[i] <= '9')){
            if(!inWord){ // inWord == 0;
                inWord = 1;
                out[count] = &(in[i]);
                count++;
            }
        }
     else {
        inWord = 0;
    }
    }
    for (int i = count - 1; i >= 0; i--){
        int j = 0;
        //while (*(pointers[count] + j))
        while ((out[i][j] >= 'A' && out[i][j]<='Z')
               || (out[i][j] >= 'a' && out[i][j] <= 'z')
               || (out[i][j] >= '0' && out[i][j] <= '9')) {
            printf("%c", out[i][j]);
            j++;
        }
        printf(" ");
    }
    printf(" ");
*/
    
    
    return 0;
}
