#include <stdio.h>
#include "task1.h"
#define N 10
#define M 64


int main()
{
    char str[N][M];
    char *p[N];
    int count = 0;                                                   //счётчик ввода строк
    printf("Для сортировки введите не более %d строк: \n", N);
    while (count < N && *fgets(str[count], M, stdin)!='\n')         //указание на конец ввода строк
    {
        p[count] = str[count];                                      //установка указателей на строки
        count++;
    }
    lineSort(p,count);
    puts("\nОтсортированные строки: \n");
    printLines(p, count);

    return 0;
}
