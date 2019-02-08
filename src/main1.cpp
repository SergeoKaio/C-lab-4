/*
 Написать программу, которая позволяет пользователю ввести несколько
 строк с клавиатуры, а затем выводящую их в порядке возрастания длины строки.
 Пояснение
 
 Строки вводятся до появления пустой строки и записываются в двумерный символьный массив. Одновременно происходит создание и заполнение массива указателей на char. После окончания ввода программа сортирует укзатели в массиве и выводит строки в соответствии с отсортированными указателями.
 
 Состав
 
 Программа должна состоять из функций:
 
 - void lineSort(char *str[],int size) - функция, сортирующая массив указателей
 - void printLines(const char *str[],int size) - функция, печатающая строки в порядке массива str
 - main() - организация ввода строк в двумерный символьный массив
 */
#include <stdio.h>
#include <stdlib.h>
#include "task1.h"
#include <string.h>
#define wordSIZE 256 // максимальное количество символов в веденном пользователем строке
#define wordCOUNT 30 // количество введенных пользователем строк

int main(){
    char str [wordCOUNT][wordSIZE] = { 0 }; // двумерный массив, заполнямый пользователем
    char *p_str [wordCOUNT] = { NULL }; // массив указателей на строки первого массива
    int count = 0; // счетчик введенных пользователем слов
    
    printf("Enter some strings for sort them in ascending order!\n");
    printf("Press 'enter' twice to finish typing!\n");
    
    // цикл заполняет массив указателей копируя значения введенные пользователем и сохраненные в массиве str. 
    while(count < wordCOUNT && *fgets(str[count], wordSIZE, stdin) != '\n'){
        p_str[count] = str[count];
        count++;
    }
    
    lineSort(p_str, count);
    printf("Strings in ascending order:\n");
    printLines((const char**)p_str, count);
    putchar('\n');
    
    return 0;
}
