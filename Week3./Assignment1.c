#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapArrays(int a1[], int a2[], int len);           
void print2DArr(int *arr2D[], int rows, int columns);

int main()
{
    int a1[] = {1,2,3,4,5};
    int a2[] = {0,0,0,0,0};
    int len = sizeof(a1)/sizeof(int);
    int *arr2D[2] = {a1,a2};            // a 2 length array of int pointers, 
                                        // remember an int pointer pointing to [0] of an array 
                                        // is all you need to point to an array
    print2DArr(arr2D, 2, len);
    swapArrays(a1, a2, len);
    printf("\n");
    print2DArr(arr2D, 2, len);
    return 0;
}

void swapArrays(int a1[], int a2[], int len)
{
    // swaps contents of arrays
    int a,temp ;
    
    for ( a=0; a < len ; a++)
    {
    	
    	temp = a1[a] ;
    	a1[a] = a2[a];
    	a2[a] = temp;
    	 
   
    }
}

void print2DArr(int *arr2D[], int rows, int columns)
{
    // prints contents of the 2D array in a flattened shape
    // eg: [[1,2],[3,4]] will be printed as 1 2 3 4\n
    // make sure there is no empty ' ' printed after the last element
    
   
    int num;
    
    for ( num = 0; num < rows; num++)
    {
   	if (num == (rows-1))
   	{

    		for (int num_2 =0; num_2 < columns ; num_2++)
    		{
    			if (num_2 == (columns-1))
    				printf( "%d", arr2D[num][num_2] );
    			else
    				printf( "%d ", arr2D[num][num_2] );
    		}
    	}
    	
    	else 
    	{
    		for (int num_2 =0; num_2<5 ; num_2++)
    			printf("%d ", arr2D[num][num_2]);
    	}
    						
    }
    
        
    
    
    
    
    
    
    
    
}
	
	




