#include <stdio.h>

void swap(int *a,int *b)
{
	int temp;
	temp = *a; 
	*a = *b;
	*b = temp;
	
}

int bubble_sort(int *input, int n)
{
    
	for(int i= 0; i < n -1 ; i++)
	{
		for(int j  = 0; j < n -i- 1 ; j++)
		{ 
			if ( input[j] > input[j+1])
			{
				swap(&input[j],&input[j+1]);
				
			
			}
		}
	}
}

int main()
{
	int tosort[] = {45,78,5,6,11,16,17};
	int number_of_elements = sizeof(tosort) /sizeof(int);
	
	bubble_sort(tosort,number_of_elements);
	
	for(int i = 0; i < number_of_elements; i ++)
		{
			printf("%d\t",tosort[i]);
		}
		printf("\n");
	return 0;
}		

	
