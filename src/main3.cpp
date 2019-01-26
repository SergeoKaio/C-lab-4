/*Задача №3
   Написать программу, которая запрашивает строку и определяет, не является
ли строка палиндромом (одинаково читается и слева направо и справа налево)
Пояснение

Цель задачи - применить указатели для быстрого сканирования строки с двух концов

Состав

Программа должна состоять из функций:

    - int isPalindrome(char * str) - функция, проверяющая str (ответ либо 0, либо 1)
    - main() - организация ввода строки
Создаются три файла: task3.h,task3.cpp,main3.cpp.*/

#include <stdio.h>
#include "task3.h"


int main()
{
	char  str[N] = { 0 };
	fgets(str, N, stdin);
	isPalindrome(str);
	if (isPalindrome(str) == 0)
		printf("is polindrom");
	if (isPalindrome(str) == 1)
		printf("fgldf");
	return 0;
}

