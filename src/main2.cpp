#include <stdio.h>
#include "task2.h"

#define N 128


int main()
{
    char in[N] = {0}, out[N];
    printf("Enter a string: \n" );
    fgets(in, N, stdin);
    reverseWords(in, out);
    return 0;
}


