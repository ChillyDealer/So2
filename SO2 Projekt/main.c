#include <stdio.h>
#include <string.h>
#include "head.h"

int compare(char string1[]);

int main(){
    int i = 0;
    int yes;
	char str[] = "Nigger gay i omar er den";
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
        if(compare(word4word[i]) == 0){
            printf("FAKE");
        }
	}
	printf("\n");

	printf("See Keywords ? If Yes write 1\n");
	scanf("%d", &yes);
	if (yes == 1)
    {
        printf("%s\n%s\n%s", BigKeywords[0], MediumKeywords[0], SmallKeywords[0]);
    }

	return 0;
}

int compare(char string1[]){
    for(int i = 0; i < 11; i++){
        if(strcmp(string1, BigKeywords[i]) == 0){
            return 0;
        }
    }
    return 1;
}
