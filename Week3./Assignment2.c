#include <stdio.h>

void swapStrings(char **destination, char **source);

int main()
{
	// define and initialize str1
	// define and initialize str2
	
	char *str1 = "First 1";
	char *str2 = "Second 2";
	
	printf("str1: %s, str2: %s\n", str1, str2);
	swapStrings(&str1, &str2);
	printf("str1: %s, str2: %s\n", str1, str2);
	
	return 0;
	
}

void swapStrings(char **destination, char **source)
{
	// swaps contents of strings
	// implement this function without using any built-in function
	
	char *temp;
	
	temp = *destination;
	*destination = *source;
	*source = temp;
}

