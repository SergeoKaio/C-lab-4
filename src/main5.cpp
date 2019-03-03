#include <stdio.h>
#define M 24

int main()
{

	int N;
	printf("Write count of relatives: \n");
	scanf("%d", &N);

	char family[N][M];
	char * young;
	char * old;
	int minAge = 100, maxAge = 0, temp = 0;         

	for (int i = 0; i < N; i++)
	{
		printf("Write name of relatievs: \n");
		scanf("%s", family[i]);
		printf("Write ages: \n");
		scanf("%d", &temp);

		if (temp > maxAge)
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

	printf("The younges is %s - %d \n", young, minAge);
	printf("The oldest %s - %d \n", old, maxAge);

	return 0;
}