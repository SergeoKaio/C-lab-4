/* Написать программу, которая с помощью массива указателей выводит слова
   строки в обратном порядке. Пример: "буря мглою небо кроет" -> "кроет небо мглою буря"*/

#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"

int main() {
	char sentence[CHARS] = { NULL };
	char out[CHARS] = { NULL };
	
	//************************Enter str***************************
	printf("Enter sentense (max %d letters):\n", CHARS);
	for (int i = 0; i < CHARS; i++) {
		sentence[i] = getchar();
		if (sentence[i] == '\n') {
			sentence[i] = '\0';
			break;
		}
	}
	
	//**********************New sentense**************************
	printf("New sentense is:\n" "%s\n", reverseWords(sentence, out));
	return 0;
}