#include <string.h>

int isPalindrome(char * str){
    char * start = str;
    char * end = str + strlen(str) - 1;
    
    for (; start < end; start ++, end --){ // идем навстречу друг другу по адресам
        
        if(*start!=*end){ // указатели на два символа строки - первый и последний
            
            return 0;
        }
    }
    return 1;
};
