#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "omar er den stoorste bot paa kloden";
	int word4word = strlen(str);
	char delim[] = " ";
	int NumberOfWords = 0;
	int i  = 0;


	char *ptr = strtok(str, delim);

	while(ptr != NULL)
	{
	    char *str;
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
		i++;
		NumberOfWords++;

	}

	/* This loop will show that there are zeroes in the str after tokenizing */
	for (int i = 0; i < word4word; i++)
	{
		printf("%s ", str[i]); /* Convert the character to integer, in this case
							   the character's ASCII equivalent */
	}
	printf("\n");

	return 0;
}
