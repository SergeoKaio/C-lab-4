#include <string.h>

int isPalindrome(char * str)

{
    int len = strlen(str);
    for(int i = 0; i < len/2; ++i)  //сравниваем первый и последний элементы, далее второй и предпоследний, и так до середины
    {
        if(str[i] != str[len-i-2]) // последний элемент массива это '\n', чтобы не включать его в проверку добавляем -2
            return 0;
    }
    return 1;
}
