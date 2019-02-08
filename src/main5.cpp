/*
 
 Задача №5
 
 Написать программу, которая запрашивает количество родственников в семье,
 а потом позволяет ввести имя родственника и его возраст. Программа должна
 определить самого молодого и самого старого родственника и вывести их имена
 Пояснение
 
 Нужно завести массив строк для хранения имён и два указателя: young и old, которые по мере ввода, связывать с нужными строками. Также необходимы три числовые переменные для:
 
 Ввода текущего возраста
 Хранения максимального возраста
 Хранения минимального возраста
 Состав
 
 Программа должна состоять из функций:
 
 - main()
 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LENGTHNAME 30 // длина имени


int main (void){
    
    int numRelatives = 0; // переменная, в которой храниться количество родственников
    
    int ageMax = 0; // максимальный возраст
    int ageMin = 999; // минимальный возраст
    int age = 0; // текущий возраст
    char * young = NULL; // указатель на молодого родственника
    char * old = NULL; // указатель на старого
    
    puts("Enter numbers of relatives");
    scanf("%d", &numRelatives);
    
    //Выделяем память для указателей на строки, в которых зранятся родственники
    char** relatives = NULL;
    relatives = (char**)(malloc(numRelatives *  sizeof(char*)));
    
    for(int i = 0; i < numRelatives; i++){
        relatives[i] = (char*)(malloc(LENGTHNAME * sizeof(char)));
    }
    
    for(int i = 0; i < numRelatives; i++){
        
        printf("Name of your %d relative:\n", i+1);
        scanf("%s", relatives[i]);
        
        printf("Age of your %d relative:\n", i+1);
        scanf("%d", &age);
        
        if(age < ageMin){
            ageMin = age;
            young = relatives[i];
        } else {
            ageMax = age;
            old = relatives[i];
        }
        
    }
    printf("Youngest relative is %s. He is %d year old.\n", young, ageMin);
    
    printf("Oldest relative is %s. He is %d year old. \n", old, ageMax);
    
    return 0;
}
