#include <string.h>

int isPalindrome(char * str)
{
    if(str[strlen(str) - 1] == '\n')
            str[strlen(str) - 1] = 0;

    int len = strlen(str);
    for(int i = 0; i < len/2; ++i)  //сравниваем первый и последний элементы, далее второй и предпоследний, и так до середины
    {
        if(str[i] != str[len-i-1]) // последний элемент массива это '\0', чтобы не включать его в проверку добавляем -2
            return 0;
    }
    return 1;
}
