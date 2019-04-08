#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
	char str[] = "det gay i omar er den";
	char *word4word[20];
	char delim[] = " ";
    int numberOfWords = 0;
	char *ptr = strtok(str, delim);

	    while(ptr != NULL)
    {
        word4word[i]=ptr;
        ptr = strtok(NULL, delim);
        i++;
        numberOfWords++;

    }

	for (int i = 0; i < numberOfWords; i++)
	{
		printf("\n %s ", word4word[i]);
	}
	printf("\n");

	return 0;
}
