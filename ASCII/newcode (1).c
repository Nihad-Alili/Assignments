#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void function(char *source, char *integer, char *nonInteger)
{
	int integerIndex=0, nonIntegerIndex=0;
	
	for( int num=0; source[num] != '\0'; num++)
	{
		
		if(source[num]<=57 && source[num]>=48)
		{	
			integer[integerIndex] = source[num];
			integerIndex++;
		}	
		
		else
		{
			nonInteger[nonIntegerIndex] = source[num];
			nonIntegerIndex++;
		}
		integer[integerIndex] = '\0';
		nonInteger[nonIntegerIndex] = '\0';

	}
	
	printf(" nonInteger: %s", nonInteger);
	printf("\n Integer %s\n", integer);
	
}

int main(void)
{
	char source[] = "8112020Qarabag!!$";
	char integers[256];
	char nonIntegers[256];
	
	function(source, integers, nonIntegers);
	return 0;
	
}

