/*
 Задача №4
 
 Написать программу, сортирующую строки (см. задачу 1), но использующую
 строки, прочитанные из текстового файла. Результат работы программы также
 записывается в файл.
 Пояснение
 
 Программа должна использовать task1.cpp, в котором уже определена функция lineSort, а в task4.cpp еще одного определения быть не должно.
 
 Состав
 
 Программа должна состоять из функций:
 
 - void lineSort(char *str[],int size) - функция, сортирующая массив указателей
 - void printLinesToFile(const char *str[],int size,FILE *fp) - функция, печатающая строки в порядке массива str
 - main() - организация ввода строк в двумерный символьный массив.
 
 
 */
#include <stdio.h>
#include <stdlib.h>
#include "task4.h"
#include "task1.h"
#include <string.h>
#define wordSIZE 256 // максимальное количество символов в веденном пользователем строке
#define wordCOUNT 30 // максимальное количесво слов допустимое для нашего двумерного массива

int main(){
    char str [wordCOUNT][wordSIZE] = { 0 }; // двумерный массив, заполнямый пользователем
    char *p_str [wordCOUNT] = { NULL }; // массив указателей на строки первого массива
    int count = 0; // счетчик введенных пользователем слов
    
    FILE * fp = NULL;
    fp = fopen("text4.txt", "r+"); // читаем файл text.txt
    
    if(fp == NULL){
        printf("Error! Your file can't be opened!");
        return 1;
    }

    
    // цикл заполняет массив указателей копируя значения введенные пользователем и сохраненные в массиве str.
    while((count < wordCOUNT) && (fgets(str[count], wordSIZE, fp) != NULL) ){
        p_str[count] = str[count];
        count++;
    }
    
    lineSort(p_str, count);
    
    printLinesToFile((const char**) p_str, count, fp);
    
    fclose(fp);
    
    return 0;
}
