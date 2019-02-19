/*Задача №3

Написать программу, которая запрашивает строку и определяет, не является
ли строка палиндромом (одинаково читается и слева направо и справа налево)
Пояснение

Цель задачи - применить указатели для быстрого сканирования строки с двух концов

Состав

Программа должна состоять из функций:

- int isPalindrome(char * str) - функция, проверяющая str (ответ либо 0, либо 1)
- main() - организация ввода строки
Создаются три файла: task3.h,task3.cpp,main3.cpp.
*/

#include <stdio.h>
#include <string.h>
#include "task3.h"
#define N 256

int main (void) {
    
    char str [N] = { 0 };
    printf("Enter a string:\n");
    fgets(str, N, stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    
    if(isPalindrome(str) == 1)
        printf("%s is Palindrom\n", str);
    else if (isPalindrome(str) == 0)
        printf("%s is not Palindrom\n", str);
    
    return 0;
}
