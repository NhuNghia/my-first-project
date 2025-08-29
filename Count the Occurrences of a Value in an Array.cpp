#include<stdio.h>


int occurrences( int array[],
				 int length,
				 int to_find);

int main(void)
{
	int myArray1[]={2,3,2,4,6,7,2,3,5,3};
	int myArray2[]={2,5,6,7,8,2,2,5,5,3};
	
	int find1 = occurrences(myArray1,
							10,
							4);
							
	int find2 = occurrences(myArray2,
							10,
							2);					
							
	printf ("number 5 found in myArray1 is : %d\n", find1);
	printf ("number 2 found in myArray1 is : %d\n", find2);
	
	return 0; 
}

int occurrences( int array[],
				 int length,
				 int to_find)
{
	int count = 0;  
	for(int i=0; i< 10; i++)
	{	
		if (array[i]== to_find)
		{
			count++;
		}
	}	
	return count;			
}
