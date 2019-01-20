#include <stdio.h>
#define M 24

int main()
{

    int N;
    printf("Введите количество родственников: \n");
    scanf("%d", &N);

    char family[N][M];
    char * young;
    char * old;
    int minAge = 100, maxAge = 0, temp = 0;         //заведомо нереальный минимальный возраст, иначе не пройдёт проверку условие if (temp < minAge)

    for(int i = 0; i < N; i++)
    {
        printf("Введите имя родственника: \n");
        scanf("%s", family[i]);
        printf("Введите его возраст: \n");
        scanf("%d", &temp);

        if(temp > maxAge)
        {
            maxAge = temp;
            old = family[i];

        }
        if (temp < minAge)
        {
            minAge = temp;
            young = family[i];
        }
    }

    printf("Ваш самый младший родственник %s и ему %d лет\n", young, minAge);
    printf("Ваш самый старший родственник %s и ему %d лет\n", old, maxAge);

    return 0;
}
